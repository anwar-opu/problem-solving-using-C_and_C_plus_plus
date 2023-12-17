#include<bits/stdc++.h>
#define ll long long int
#define FastIO ios_base::sync_with_stdio(false), cin.tie(0)
using namespace std;
int main()
{   FastIO;
        ll t;
        cin>>t;
        while(t--) {
            ll n;
            cin >> n;
            set<int> s;
            for (int i = 0; i < n; i++) {
                int x;
                cin>>x;
                s.insert(x);
            }
            cout<<s.size()<<endl;
        }
        return 0;
}