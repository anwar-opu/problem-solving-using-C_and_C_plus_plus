#include<bits/stdc++.h>
#define ll long long int
#define FastIO ios_base::sync_with_stdio(false), cin.tie(0)
using namespace std;
int main(){
    FastIO;
    ll n,result = 0,decrement;
    cin>>n;

    result = pow(2,1)+pow(2,n);

    decrement = n-1;

    for (int i = 2; i < n; i++) {
        result = result - (pow(2,i)+ pow(2,decrement));
        decrement--;
        if(decrement==i){
            break;
        }
    }
    cout<<result<<endl;


}