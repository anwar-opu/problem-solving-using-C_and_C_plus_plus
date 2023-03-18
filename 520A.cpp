#include<bits/stdc++.h>
using namespace std;

int main(){
    string str;
    int n,count=0;
    cin>>n;
    cin>>str;

    for (int i = 0; i < n; i++) {
        str[i]= tolower(str[i]);
    }
    sort(str.begin(),str.end());

    for (int i = 0; i < n ; i++) {
        if(str[i] != str[i+1]){
            count++;
        }
    }
    //cout<<str<<endl;


    //cout<<count;
    if(count == 26){
        cout<<"YES";
    }
    else
        cout<<"NO";
    return 0;
}