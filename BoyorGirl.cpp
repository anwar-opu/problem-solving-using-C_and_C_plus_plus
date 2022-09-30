#include<iostream>
#include<bits/stdc++.h>
#include <unordered_map>

using namespace std;
int countDistinct(string s)
{

    unordered_map<char, int> m;

    for (int i = 0; i < s.length(); i++) {
        m[s[i]]++;
    }

    return m.size();
}
int main(){
    string s;
    int n;
    cin>>s;
    n=countDistinct(s);
   // cout<<n;

  if(n%2==0){
      cout<<"CHAT WITH HER!";
  } else {
      cout << "IGNORE HIM!";
  }

}