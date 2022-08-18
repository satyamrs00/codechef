#include <iostream>
#include <bits/stdc++.h> 

using namespace std;

typedef long long ll;
typedef long double ld;


void solve(){
    string s;
    cin >> s;
    map <char, int> m;
    for(char c : s){
        if(m[c]){
            m[c]++;
        } else {
            m[c] = 1;
        }
    }
    ll ans = 0;
    for(auto it = m.begin(); it != m.end(); it++){
        ans += it->second /2;
        ans += it->second % 2;
    }
    cout << ans << endl;
}


int main() {

    ll t;
    cin >> t;  

    while(t--){

        solve();

    }
    return 0;
}