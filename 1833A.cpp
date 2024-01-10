#include<bits/stdc++.h>
#define ll long long int
#define FastIO ios_base::sync_with_stdio(false), cin.tie(0)
using namespace std;
int main() {
    FastIO;
    int t;
    cin>>t;
    while(t--) {
        unordered_set<string> s;
        string s1;
        ll n;
        cin >> n;
        cin >> s1;

        for (int i = 0; i < n - 1; ++i) {
            s.insert(s1.substr(i, 2));
        }
//        for (auto &value: s) {
//            cout << value << endl;
//        }
        cout << s.size() << endl;
    }

}