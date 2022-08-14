#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void solve(){
    string s;
    cin >> s;
    char prev = '*';
    int counter = 0;
    for(char a:s){
        if(prev == '<' && a == '>'){
            counter++;
        }
        prev = a;
    }
    cout << counter << endl;
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
