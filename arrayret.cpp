
#include <bits/stdc++.h> 
#include <iostream>
using namespace std;

typedef long long ll;
typedef vector<ll> v64;
#define forn(i,e) for(ll i = 0; i < e; i++)
#define pb push_back

void solve(){
    ll n, tmp, sumv = 0;
    cin >> n;
    ll i = 0;
    v64 v;
    forn(i, n){
        cin >> tmp;
        v.pb(tmp);
        sumv += tmp;
    }
    ll suma = sumv/(n+1);
    for(ll item : v){
        cout << item -suma << ' ';
    }
    cout << endl;
}


int main() {
    ll t;
    cin >> t;  

    while(t--){

        solve();

    }
    return 0;
}