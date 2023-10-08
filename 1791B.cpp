#include<bits/stdc++.h>
#define ll long long int
#define FastIO ios_base::sync_with_stdio(false), cin.tie(0)
using namespace std;
int main(){
    FastIO;
    int t;
    cin>>t;
    while(t--){
        int n,firstPair = 0, secondPair = 0,flag = 1;
        string s;
        cin>>n;
        cin>>s;
        for (int i = 0; i < n; i++) {
            if(s[i] == 'R'){
                firstPair++;
            }
            else if(s[i] == 'L'){
                firstPair--;
            }else if(s[i] == 'U'){
                secondPair++;
            }else if(s[i] == 'D'){
                secondPair--;
            }
            if(firstPair==1 && secondPair == 1){
                cout<<"YES"<<endl;
                flag = 0;
                break;
            }
        }
        if(flag == 1){
            cout<<"NO"<<endl;
        }
    }
}