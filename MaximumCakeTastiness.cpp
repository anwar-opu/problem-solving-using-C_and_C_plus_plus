#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n,sum=0;

    cin>>t;
    while(t--){
        cin>>n;
        int cake[n];
        for (int i = 0; i < n; i++) {
            cin>>cake[i];
        }
        sort(cake,cake+n);
//        for (int i = 0; i < n; i++) {
//            cout<<cake[i]<<" ";
//        }
        sum = cake[n-1]+cake[n-2];
        cout<<sum<<endl;
        sum=0;

    }
    return 0;

}