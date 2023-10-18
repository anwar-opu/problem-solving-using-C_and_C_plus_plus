#include<bits/stdc++.h>
#define ll long long int
#define FastIO ios_base::sync_with_stdio(false), cin.tie(0)
using namespace std;
int main(){
    FastIO;
    ll t;
    cin>>t;
    while(t--) {
        string s1 = "codeforces";
        string s;
        ll count = 0;
        cin >> s;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] != s1[i]) {
                count += 1;
            }
        }
        cout << count << endl;
    }
    return 0;
}