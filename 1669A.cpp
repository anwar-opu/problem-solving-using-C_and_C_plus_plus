#include<bits/stdc++.h>
#define ll long long int
#define FastIO ios_base::sync_with_stdio(false), cin.tie(0)
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        ll rating;
        cin>>rating;
        if(rating<=1399){
            cout<<"Division 4"<<endl;
        }else if(rating> 1399 && rating <= 1599){
            cout<<"Division 3"<<endl;
        }else if(rating> 1599 && rating <= 1899){
            cout<<"Division 2"<<endl;
        }else{
            cout<<"Division 1"<<endl;
        }
    }

}
