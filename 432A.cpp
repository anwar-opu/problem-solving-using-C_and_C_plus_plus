#include<bits/stdc++.h>
#define FastIO ios_base::sync_with_stdio(false), cin.tie(0)
using namespace std;
int main(){
    FastIO;
    vector<int> v;
    int n,k,count=0;
    cin>>n>>k;
    for (int i = 0; i < n; i++) {
        int x;
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    for (int i = 0; i < n; i++) {
        if(v[i]+k<=5) {
            count++;
        }else
            break;
    }
    cout<<(count/3)<<endl;
    return 0;
}