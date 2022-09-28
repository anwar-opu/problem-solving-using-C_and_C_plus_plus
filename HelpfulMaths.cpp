#include<iostream>
#include <cstring>
#include <sstream>
#include <bits/stdc++.h>

using namespace std;
int main(){
    string s;
    int n,x,j=0,m=0;


    cin>>s;
    n = s.length();

    int z = n - n/2;
    int b[z];

    if(n==1){
        cout<<s;
    }
    else {
        for (int i = 0; i < n; i++) {
            if (s[i] != '+') {
                stringstream strm;
                strm << s[i];
                x = stoi(strm.str());
                b[j] = x;
                j++;
            }
        }
        m= sizeof(b)/ sizeof(b[0]);
        sort(b,b+m);
        cout<<b[0] <<"+";
        for(j=1;j<z-1;j++) {
            cout << b[j] << "+";
        }
            cout << b[z - 1];
    }
    return 0;

}