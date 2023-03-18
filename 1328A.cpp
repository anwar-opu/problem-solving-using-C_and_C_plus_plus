#include<bits/stdc++.h>

using namespace std;
int main(){
    long long int t,num1,num2;
    cin>>t;

    while(t--){
        long long int temp =0;
        cin>>num1>>num2;
        if(num1 % num2 == 0){
            cout<<"0"<<endl;
        }
        else
            cout<< num2 - (num1% num2)<<endl;

    }
    return 0;
}