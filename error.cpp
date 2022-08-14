#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void solve(){
    string s;
    cin >> s;
    char p = '2', pp = '2';
    for (char a:s){
        if((pp == '0' && p == '1' && a == '0') || (pp == '1' && p == '0' && a == '1')){
            cout << "Good" << endl;
            return;
        }
        pp = p;
        p = a;
    }
    cout << "Bad" << endl;
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
