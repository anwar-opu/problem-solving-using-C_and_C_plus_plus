#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v;
    int n = 4;
    for (int i = 0; i < n; i++) {
        int x;
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
//    for (int i = 0; i < n; i++) {
//        cout<<v[i]<<" ";
//    }
//    cout<<"\n";
    for (int i = 0; i < n-1; i++) {
        cout<<v[n-1]-v[i]<<" ";
    }
    return 0;
}
