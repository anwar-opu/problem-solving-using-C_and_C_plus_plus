#include<bits/stdc++.h>
#define ll long long int
#define FastIO ios_base::sync_with_stdio(false), cin.tie(0)
using namespace std;
int main(){
    FastIO;
    ll t,n ;
    cin>>t;
    while(t--){
        cin >> n;
        for (int i = 2; i <= n; i++) {
            cout<<i<<" ";
            if (n==i){
                cout<<"1"<<endl;
            }
        }
    }

}
