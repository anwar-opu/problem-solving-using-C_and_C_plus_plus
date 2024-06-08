#include<bits/stdc++.h>
#define ll long long int
#define FastIO ios_base::sync_with_stdio(false), cin.tie(0)
using namespace std;
int main(){
    FastIO;
    ll oneCount=0,twoCount=0;
    vector<int> v;
    ll n;
    cin>>n;
    for (int i = 0; i < n; i++) {
        int x;
        cin>>x;
        v.push_back(x);
    }
    for (int i = 0; i < n; i++) {
        if(v[i]==1){
            oneCount++;
        }
        else if(v[i]== 2){
            twoCount++;
        }
    }
    if()
}