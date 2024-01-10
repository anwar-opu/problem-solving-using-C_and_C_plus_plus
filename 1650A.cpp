#include<bits/stdc++.h>
#define ll long long int
#define FastIO ios_base::sync_with_stdio(false), cin.tie(0)
using namespace std;
int main() {
    FastIO;
    int t;
    cin>>t;
    while(t--) {
        int flag = 0;
        string s;
        char s1;
        cin >> s;
        cin >> s1;
        for (int i = 0; i < s.size(); i=i+2) {
            if (s[i] == s1 && i % 2 == 0) {
                cout << "YES" << endl;
                flag = 1;
                break;
            }
        }
        if (flag == 0) {
            cout << "NO" << endl;
        }
    }
}
