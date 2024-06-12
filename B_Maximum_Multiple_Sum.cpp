#include<bits/stdc++.h>
#define ll long long int
#define FastIO ios_base::sync_with_stdio(false), cin.tie(0)
using namespace std;
int main(){
    FastIO;
    int t;
    cin>>t;
    while(t--){
        int n,result=0,PreviewSum=0;
        cin>>n;
        for(int i=2; i <= n ; i++){
            int sum = 0;
            for(int j=1;  ; j++){
                if( i*j > n){
                    break;
                } 
                sum = sum + i * j;
            }
            
            // cout<<"p"<<PreviewSum<<endl;
            if(PreviewSum<sum){
                result = i;
                PreviewSum = sum;
            }
        }   
        cout<<result<<endl;
    }
    return 0;
}