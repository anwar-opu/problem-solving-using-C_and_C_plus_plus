#include<bits/stdc++.h>
#define ll long long int
#define FastIO ios_base::sync_with_stdio(false), cin.tie(0)
using namespace std;
int main(){
    FastIO;
    ll n,min, count = 1,m = 1;
    vector<ll> v;
    cin>>n;
    for (int i = 0; i < n; i++) {
        int x;
        cin>>x;
        v.push_back(x);
    }
    min = v[0];
    for (int i = 0; i < n; i++) {
        if(v[i]>min){
            count++;
            min = v[i];
            if(m<count){
                m = count;
            }
        }else{
            count = 1;
            min = v[i];
        }
    }
    cout<<max(m,count)<<endl;
    return 0;
}