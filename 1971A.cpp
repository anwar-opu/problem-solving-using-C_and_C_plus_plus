#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define FastIO ios_base::sync_with_stdio(false), cin.tie(0)
int main() {
    FastIO;
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        cout<<min(a,b)<<" "<<max(a,b)<<endl;
    }
}