#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,zero=0,zerob=0,one=0,oneb=0, result=0;
    int a[100000];
    int b[100000];
    cin>>n;

    for (int i = 0; i < n ; i++) {
        cin>>a[i]>>b[i];
    }
    for (int j = 0; j < n; j++) {
        if(a[j]==0){
            zero++;
        }
        if(a[j]==1){
            one++;
        }
        if (b[j]==0){
            zerob++;
        }
        if(b[j]==1){
            oneb++;
        }
    }

    result = min(zero,one) + min(oneb,zerob);
    cout<<result;


}