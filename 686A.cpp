#include<bits/stdc++.h>
#define ll long long int
#define FastIO ios_base::sync_with_stdio(false), cin.tie(0)
using namespace std;
int main(){
    FastIO;
    ll t,Initially,add,count=0;
    char Operator;
    cin>>t>>Initially;
    while(t--){
        cin>>Operator>>add;
        if(Operator == '+'){
            Initially = Initially + add;
        }else if(Operator == '-' && Initially>= add){
            Initially = Initially - add;
        }else
            count++;

    }
        cout<<Initially<<" "<<count<<endl;
}