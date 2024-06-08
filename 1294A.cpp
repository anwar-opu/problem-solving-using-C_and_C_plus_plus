#include<bits/stdc++.h>
#define ll long long int
#define FastIO ios_base::sync_with_stdio(false), cin.tie(0)
using namespace std;
int main() {
    FastIO;
    int t;
    cin>>t;
    while (t--) {
        ll a, b, c, n, sum = 0;
        cin >> a >> b >> c >> n;
        sum = a + b + c + n;
        if (sum % 3 == 0) {
            cout << "YES" << endl;
        } else
            cout << "NO" << endl;
    }
    return 0;
}