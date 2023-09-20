#include<bits/stdc++.h>
#define ll long long int
#define FastIO ios_base::sync_with_stdio(false), cin.tie(0)
using namespace std;

int main(){
    FastIO;
    ll n,div = 0;
    cin>>n;
    if(n%2 == 0){
        div = n/2;
        cout<<div<<endl;
        for (int i = 0; i < div; i++) {
            cout<<"2 ";
        }
    }else{
       div =  (n - 3)/2 ;
       cout<<div+1<<endl;
        for (int i = 0; i < div ; i++) {
            cout<<"2 ";
        }
        cout<<"3"<<endl;

    }
    return 0;
}
