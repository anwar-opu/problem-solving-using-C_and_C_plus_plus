#include<bits/stdc++.h>

using namespace std;
int main(){
    int k,n,w, sum=0, total_sum= 0;
    cin>>k>>n>>w;
    for (int i = 1; i <= w ; i++) {
        sum = sum + k * i;
    }
    total_sum = sum - n;
    if(total_sum<0 ){
        cout<<"0";
    }
    else
        cout<<total_sum;
    return 0;
}