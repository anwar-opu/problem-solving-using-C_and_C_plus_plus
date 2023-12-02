#include<bits/stdc++.h>
#define ll long long int
#define FastIO ios_base::sync_with_stdio(false), cin.tie(0)
using namespace std;
int main(){
    FastIO;
    int t;
    cin>>t;
    while(t--) {
        ll n, k;
        cin >> n >> k;
        ll arr[n];
        for(int i=0; i<n;i++){
            cin>>arr[i];
        }
        if (is_sorted(arr, arr + n) || k>1) {
            cout << "YES" << endl;
        } else
            cout << "NO" << endl;
    }
    return 0;
}