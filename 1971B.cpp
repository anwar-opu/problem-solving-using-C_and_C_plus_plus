#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define FastIO ios_base::sync_with_stdio(false), cin.tie(0)
int main() {
    FastIO;
    int t;
    cin>>t;
    while(t--) {
        int count = 0;
        string s;

        cin >> s;
        for (int i = 1; i < s.length(); i++) {
            if (s[0] == s[i]) {
                count++;
            }
            else {
                break;
            }
        }
        if (s.length() - 1 == count) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;

            for (int i = 1 ; i < s.length() ; ++i) {
                swap(s[0],s[i]);
            }
            for (int i = 0; i < s.length(); i++) {
                cout<<s[i];
            }

            cout<<endl;
        }
    }
}