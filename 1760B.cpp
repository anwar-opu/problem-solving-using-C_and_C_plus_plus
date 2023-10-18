#include<bits/stdc++.h>
#define ll long long int
#define FastIO ios_base::sync_with_stdio(false), cin.tie(0)
using namespace std;
int main(){
    FastIO;
    ll t;
    cin>>t;
    while(t--) {
        vector<char> c;
        int n, convertInt = 0;
        cin >> n;
        for (int i = 0; i < n; i++) {
            char x;
            cin >> x;
            c.push_back(x);
        }
        sort(c.begin(), c.end());
        convertInt = c[n - 1];
        cout << (convertInt - 96) << endl;
    }
    return 0;
}
