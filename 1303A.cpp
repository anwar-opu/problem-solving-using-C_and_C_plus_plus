#include<bits/stdc++.h>
#define ll long long int
#define FastIO ios_base::sync_with_stdio(false), cin.tie(0)
using namespace std;
int main() {
    FastIO;
    int t;
    cin>>t;
    while(t--) {
        int l = 0, r = 0, count = 0;
        string s;
        cin >> s;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '1') {
                l = i;
                break;
            }
        }
        for (int i = s.size(); i > 0; i--) {
            if (s[i] == '1') {
                r = i;
                break;
            }
        }
        for (int i = l; i < r; i++) {
            if (s[i] == '0') {
                count++;
            }
        }
//    cout<<l<<" "<<r<<endl;
        cout << count << endl;
    }
}
