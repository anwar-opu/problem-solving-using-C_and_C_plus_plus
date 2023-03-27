#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v;
    int n,sum=0,count=0;
    cin>>n;
    for (int i = 0; i < n; i++) {
        int x;
        cin>>x;
        v.push_back(x);
    }
    for (int i = 0; i < n; i++) {
        sum  = sum + v[i];
        if(sum<0){
            count++;
            sum = 0;
        }

    }
    cout<<count<<endl;
}