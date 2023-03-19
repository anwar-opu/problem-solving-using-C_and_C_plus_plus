#include<bits/stdc++.h>
using namespace std;
int main(){
    int num1,num2,t,num3;
    cin>>t;
    while(t--){
        cin>>num1>>num2>>num3;

        if(num1<num3 && num2<num3){
            cout << "+"<<endl;
        }else if(num1>num3 || num2>num3) {
            cout<<"-"<<endl;
        }

    }

    return 0 ;

}