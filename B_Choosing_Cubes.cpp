#include<bits/stdc++.h>
#define ll long long int
#define FastIO ios_base::sync_with_stdio(false), cin.tie(0)
using namespace std;
int main(){
    FastIO;
    int t;
    cin>>t;
    while(t--){
        int n,k,f,favorite,count=0,firstS=0,LastS=0;
        cin>>n>>f>>k;
        vector<int> v;
        for(int i=0;i<n;i++){
            int num;
            cin>>num;
            v.push_back(num);
        }
        favorite = v[f-1];
        sort(v.begin(),v.end(),greater<int>());
        // for(int i=0; i<n; i++){
        //     cout<<v[i]<<" ";
        // }
    
        for(int i=0 ; i < k ; i++){
            if(v[i] == favorite){
                // cout<<"YES"<<endl;
                firstS++;
                break;
            }
        }
        for(int i = k; i < n ; i++){
            if(v[i] == favorite){
                LastS++;
                break;
            }
        }
        // cout<<endl;
        // cout<<favorite<<endl;
        if(firstS && LastS){
            cout<<"MAYBE"<<endl;
        }else if(firstS){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }

}