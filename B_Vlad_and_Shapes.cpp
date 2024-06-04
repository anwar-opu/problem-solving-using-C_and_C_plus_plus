#include<bits/stdc++.h>
#define ll long long int
#define FastIO ios_base::sync_with_stdio(false), cin.tie(0)
using namespace std;
int main(){
    FastIO;
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s[n+1];
        int a[10];
        for(int i=0 ; i < n ; i++){
            cin>>s[i];
        }
        int k = 0;
        for(int i=0 ; i < n ; i++){
            int countOne=0;
            for(int j=0; j< n ; j++){
                if(s[i][j] == '1'){
                    countOne++;
                }
                
                // if(s[i][j] == '1'){
                //     cout<<s[i][j]<<endl;
                // }
            }
            if(0<countOne){
                a[k] = countOne;  
                k++;
            }
        }
        if(a[0] == a[1]){
            cout<<"SQUARE"<<endl;
        }
        else{
            cout<<"TRIANGLE"<<endl;
        }
    }

}