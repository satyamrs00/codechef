#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    int m[n][n];

    for(int i = 0; i < n ;i++){
        for(int j = 0 ; j < n; j++){
            cin >> m[i][j];
        }
    }
    
    
    int ans = 0, d = 0;
    for(int length = 1; length <= n; length++){ // for length
        for(int x = 0; x < n-length+1; x++){ // to move to next sub matrix to right
            for(int y = 0; y < n-length+1; y++){  // to move to next sub array to down
                d = 0;
                for(int p = 0; p < length; p++){ // to traverse diagonally in one subarray
                    d += m[p+x][p+y];
                }
                ans = max(ans, d);
            }
        }
    }
    
    cout << ans << endl;
}

int main() {
	// your code goes here
	int t;
	cin >>t;
	while(t--){
	    solve();
	}
	return 0;
}
