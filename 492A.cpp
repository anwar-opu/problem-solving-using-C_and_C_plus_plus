// A. Vanya and Cubes
#include<bits/stdc++.h>
#define ll long long int
#define FastIO ios_base::sync_with_stdio(false), cin.tie(0)
using namespace std;
int main(){
    FastIO;
    ll n,count=0;
    cin>>n;
    int i = 1;
    int j = 2;
    while(n>0 && n >= i){
        n  = n - i;
        count++;
        i = i + j;
        j++;
    }
    cout<<count<<endl;
    return 0;
}