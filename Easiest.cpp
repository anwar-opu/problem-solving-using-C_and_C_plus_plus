#include <iostream>
#include<bits/stdc++.h>
#include <string>
using namespace std;
int main(){
    string s,m;
    int count=0,t;
    char ch='a';
    cin>>t;
    while(t--) {
        cin >> s;
        int n;
        n = s.size();


        for (int i = 0; i < n+1; i++) {
            s.insert(i, 1, ch);
            //cout<<s<<endl;
            m = s;
            reverse(m.begin(), m.end());

            // If S is equal to P
            if (s == m) {
                // Return "Yes"
                s.erase(s.begin() + i);
                count++;
                continue;
                //cout<<s<<endl;

            }
                // Otherwise
            else {
                // return "No"
                cout << "Yes" << endl;
                cout << s <<endl;
                break;
            }
        }
        if (count == n ) {
            cout << "NO"<< endl;
        }
    }
    return 0;
}