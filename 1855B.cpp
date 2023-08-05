#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<long long int> v;
    int n,count=0,m=0;
    cin>>n;
    for (int i = 0; i < n; i++) {
        long long int x;
        cin>>x;
        v.push_back(x);
    }
//    for (int i = 0; i < n; i++) {
//        cout<<v[i]<<" ";
//    }
    for (int i = 0; i < n; i++) {
        for (int j = 1; j <= 100; j++) {
            if(v[i] % j == 0){
                count++;

            }
            else {
                m = max(m, count);
                count = 0;
            }
        }
        cout<<m<<endl;
        m = 0;
        count=0;
    }
    return 0;
}