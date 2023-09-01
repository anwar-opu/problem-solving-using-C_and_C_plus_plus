#include<bits/stdc++.h>
#define ll long long int
#define FastIO ios_base::sync_with_stdio(false), cin.tie(0)
using namespace std;
int main(){
    FastIO;
    ll t;
    cin>>t;
    while(t--) {
        ll div, mod, num,temp = 0;
        cin >> div >> mod >> num;
        num = num - mod;
        temp = num - (num % div);
        cout<< ( temp + mod) <<endl;
    }
    return 0;

}