#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void solve(){
    long int n, tmp;
    cin >> n;
    set <long int> s;
    bool zeroexists = false;
    while(n--){
        cin >> tmp;
        s.insert(tmp);
        if(tmp == 0){
            zeroexists = true;
        }
    }
    cout << s.size() - zeroexists << endl;
    return;
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
