#include<bits/stdc++.h>
#define ll long long int
#define FastIO ios_base::sync_with_stdio(false), cin.tie(0)
using namespace std;
int main(){
    FastIO;
    int t;
    cin>>t;
    while(t--) {
        vector<int> v;
        int n, k,count=0;
        cin >> n >> k;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            v.push_back(x);
        }
        for (int i = 0; i < n; i++) {
            if (v[i] == k) {
                cout << "YES" << endl;
                break;
            }
            else
                count++;
        }
        if(count==n) {
            cout << "NO" << endl;
        }
    }
    return 0;
}