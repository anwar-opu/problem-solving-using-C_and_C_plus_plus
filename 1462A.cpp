#include<bits/stdc++.h>
#define ll long long int
#define FastIO ios_base::sync_with_stdio(false), cin.tie(0)
using namespace std;
int main(){
    FastIO;
    int t;
    cin>>t;
    while(t--) {
        ll n;
        vector<int> v;
        cin >> n;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            v.push_back(x);
        }
        int j = n;
        int m = ceil((float)n / 2);
        for (int i = 0; i < m; i++) {
            cout << v[i] << " ";
            j--;
            if (i != j) {
                cout << v[j] << " ";
            }
        }
        cout<<endl;
    }
}