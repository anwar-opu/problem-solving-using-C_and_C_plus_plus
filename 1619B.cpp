#include<bits/stdc++.h>
#define ll long long int
#define FastIO ios_base::sync_with_stdio(false), cin.tie(0)
using namespace std;
int main() {
    FastIO;
    int t;
    cin>>t;
    while(t--) {
        ll n;
        cin>>n;
        set<int> a;
        for(int i = 1 ; i * i <= n ; i++){
            a.insert(i*i);
        }

        for(int i = 1 ; i * i * i <= n ; i++){
            a.insert(i * i * i);
        }
        cout<<a.size()<<endl;
    }
    return 0;
}