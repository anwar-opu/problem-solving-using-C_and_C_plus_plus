#include<bits/stdc++.h>
#include <iostream>


using namespace std;

int main(){
    string s1,s2,s3, addstr;
    cin>>s1>>s2>>s3;
    addstr = s1+s2;
    sort(addstr.begin(),addstr.end());
    sort(s3.begin(),s3.end());
    if(addstr==s3){
        cout<<"YES";
    } else
        cout<<"NO";



}
