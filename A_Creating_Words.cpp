#include<bits/stdc++.h>
#define ll long long int
#define FastIO ios_base::sync_with_stdio(false), cin.tie(0)
using namespace std;
int main(){
    FastIO;
    int t;
    cin>>t;
    while(t--){
        string s1,s2;
        cin>>s1>>s2;
        swap(s1[0],s2[0]);
        cout<<s1<<" "<<s2<<endl;;
    }
    
    return 0;
}