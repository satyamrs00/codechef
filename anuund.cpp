#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void swap (long int* a, long int* b){
    long int tmp = *a;
    *a = *b;
    *b = tmp;
}

void solve(){
    long int n;
    cin >> n;
    long int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
        if(i != 0){
            if(i %2 == 0){
                if(a[i-1] < a[i]){
                    swap(a+i-1, a+i);
                }
            }
            if(i %2 != 0){
                if(a[i-1] > a[i]){
                    swap(a+i-1, a+i);
                }
            }
        }
    }
    for(int i = 0; i < n; i++){
        cout << a[i] << ' ';
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
