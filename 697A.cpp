#include<bits/stdc++.h>
#define ll long long int
#define FastIO ios_base::sync_with_stdio(false), cin.tie(0)
using namespace std;
int main(){
    FastIO;
    ll t , s, x;
    cin>> t >> s >>x;
    if(t - x == 0){
        cout<<"YES"<<endl;
    }else if(t>x){
        cout<<"NO"<<endl;
    }else{
        x -= t;
        if(x == 1){
            cout<<"NO"<<endl;
        }
        else if(x%s == 0 || (x-1)%s == 0){
            cout<<"YES"<<endl;
        }else
            cout<<"NO"<<endl;
    }
    return 0;
}