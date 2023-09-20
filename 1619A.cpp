#include<bits/stdc++.h>
#define ll long long int
#define FastIO ios_base::sync_with_stdio(false), cin.tie(0)
using namespace std;

int main(){
    FastIO;
    int t;
    cin>>t;
    while(t--) {
        int count = 0, n;
        string s;
        cin >> s;
        n = s.size() / 2;
//    cout<<n;

        if (s.size() % 2 == 0) {

            for (int i = 0; i < n; i++) {
                if (s[i] == s[n + i]) {
                    count++;
                } else {
                    cout << "NO" << endl;
                    break;
                }
            }
            if (count == n) {
                cout << "YES" << endl;
            }
        } else
            cout << "NO" << endl;
    }
    return 0;
}