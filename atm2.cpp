#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,k, tmp;
    cin >> n >> k;
    while(n--){
        cin >> tmp;
        if(tmp<=k){
            cout << 1;
            k -= tmp;
        } else {
            cout << 0;
        }
    }
    cout << endl;
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
