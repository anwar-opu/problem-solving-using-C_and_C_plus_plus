#include<bits/stdc++.h>
#define ll long long int
#define FastIO ios_base::sync_with_stdio(false), cin.tie(0)
using namespace std;
int main(){
    FastIO;
    int t;
    cin>>t;
    while(t--){
        int arr[10];
        string str;
        int n,round,sum=0;
        cin>>n>>round;
        cin>>str;
        char str1[10] = {'A','B','C','D','E','F','G'};
        for(int i=0; i<7; i++){
            // cout<<count(str.begin(), str.end(), str1[i]);
            arr[i] = count(str.begin(), str.end(), str1[i]);
        }
        for(int i = 0; i < 7 ; i++){
            if(round <= arr[i]){
                continue;
            }
            else{
                sum = sum + ( round - arr[i]);  
            }

        }
        cout<<sum<<endl;
    }
}