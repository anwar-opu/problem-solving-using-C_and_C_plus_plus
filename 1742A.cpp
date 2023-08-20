#include<bits/stdc++.h>
#define FastIO ios_base::sync_with_stdio(false), cin.tie(0)
using namespace std;
int main() {
    FastIO;
    int t;
    cin>>t;
    while(t--) {
        vector<int> v;

        for (int i = 0; i < 3; i++) {
            int x;
            cin >> x;
            v.push_back(x);
        }
        sort(v.begin(), v.end());
        if (v[0] + v[1] == v[2]) {
            cout << "YES" << endl;
        } else
            cout << "NO" << endl;
    }

}
