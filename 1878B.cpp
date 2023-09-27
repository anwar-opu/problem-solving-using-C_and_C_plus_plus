#include<bits/stdc++.h>
#define ll long long int
#define FastIO ios_base::sync_with_stdio(false), cin.tie(0)
using namespace std;
int main(){
    FastIO;
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        for (int i = 0; i < n; i++) {
           cout<< i * 2 + 1<<" ";
        }
        cout<<endl;
    }
    return 0;
}
