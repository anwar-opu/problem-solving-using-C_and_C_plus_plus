#include<bits/stdc++.h>
#define ll long long int
#define FastIO ios_base::sync_with_stdio(false), cin.tie(0)
using namespace std;
int main(){
    FastIO;
    int t;
    cin>>t;
    while(t--){
        int a=0,b=0;
        string s;
        cin>>s;
        for(int i=0; i< s.length(); i++){
            if(s[i] == 'A'){
                a++;
            }
            else if(s[i] == 'B'){
                b++;
            }
        }
        if(a>b){
            cout<<"A"<<endl;
        }else {
            cout<<"B"<<endl;
        }
    }
    return 0;
}