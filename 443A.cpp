#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    int count=0;
    getline(cin,s);
    for(int i=0;i<s.length();i++){
        if(s[i]==' ' || s[i]=='}' || s[i]=='{' || s[i]==','){
            s.erase(i,1);
            i--;
        }
    }
//    for(int i=0;i<s.length();i++){
//        cout << s[i];
//    }
    sort(s.begin(),s.end());
    for(int i=0;i<s.length();i++){
        if(s[i]==s[i+1]){
            count++;
        }
    }
    cout << (s.length()-count);
}
