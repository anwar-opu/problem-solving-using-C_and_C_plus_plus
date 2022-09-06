#include<iostream>
using namespace std;

int main() {
    string s;
    string t;
    cin >> s;
    cin >> t;

    //cout<<" "<<s.size();
    for (int i = 0; i < s.size(); i+++) {

        if ((s[i] == '1' && t[i] == '1') || (s[i] == '0' && t[i] == '0')) {
            cout << "0";
        }
        if ((s[i] == '0' && t[i] == '1') || s[i] == '1' && t[i] == '0') {
            cout << "1";
        }

    }
}