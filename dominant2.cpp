#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<int, int>&a, pair<int,int>&b){
    return a.second >b.second;
}
void soln(map<int,int>& m){
    vector<pair<int,int>> v;
    for(auto& i: m){
        v.push_back(i);
    }
    sort(v.begin(), v.end(), cmp);

    if(v[0].second == v[1].second){
        cout << "NO\n";
        return;
    }
    cout << "YES\n";
    return;
}

void solve(){
    int n, tmp;
    cin >> n;
    map<int, int> m;
    for(int i = 0; i < n; i++){
        cin >> tmp;
        if(m[tmp]){
            m[tmp]++;
        } else {
            m[tmp] = 1;
        }
    }
    soln(m);
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