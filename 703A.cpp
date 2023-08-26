#include<bits/stdc++.h>
#define ll long long int
#define FastIO ios_base::sync_with_stdio(false), cin.tie(0)
using namespace std;
int main(){
    pair<int,int> v[100];
    int num,f_count = 0, s_count =0;
    cin>>num;
    for (int i = 0; i < num; i++) {
        cin>>v[i].first>>v[i].second;
    }
    for (int i = 0; i < num; i++) {
        if(v[i].first>v[i].second){
            f_count++;
        }
        else if (v[i].first<v[i].second){
            s_count++;
        }
    }
    if(f_count>s_count){
        cout<<"Mishka"<<endl;
    }else if(f_count<s_count){
        cout<<"Chris"<<endl;
    }else
        cout<<"Friendship is magic!^^"<<endl;
    return 0;
}