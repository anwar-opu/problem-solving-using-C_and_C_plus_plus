#include<bits/stdc++.h>
#define FastIO ios_base::sync_with_stdio(false), cin.tie(0)
using namespace std;
int main(){
    FastIO;
    vector<int> v;
    int n,max = 0,sum=0, result=0;
    cin>>n;
    for (int i = 0; i < n; i++) {
        int x;
        cin>>x;
        v.push_back(x);
    }
    max = *max_element(v.begin(),v.end());
    for (int i = 0; i < n; i++) {
        sum = sum + v[i];
    }
    result = (max * n) - sum ;
    cout<<result<<endl;

    return 0;
}