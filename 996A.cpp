#include<bits/stdc++.h>

using namespace std;
int main(){
    long long int balance,div=0;
    cin>>balance;
    div = balance/100;
    div =div +  (balance%100)/20;
    div = div + (balance%20)/10;
    div = div + (balance%10)/5;
    div = div + (balance%5)/1;
    cout<<div<<endl;
    return 0;
}