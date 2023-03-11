#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    int d=0,a=0,n;

    cin>>n;
    cin>>s;
    for (char i : s) {
        if(i=='D' || i == 'd'){
            d++;
        }
        else if(i=='A' || i == 'a'){
            a++;
        }
    }
    if(a<d){
        cout<<"Danik";
    }else if (d<a){
        cout<<"Anton";
    }
    else
        cout<<"Friendship";

    return 0;
}