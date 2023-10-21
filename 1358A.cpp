#include<bits/stdc++.h>
#define ll long long int
#define FastIO ios_base::sync_with_stdio(false), cin.tie(0)
using namespace std;
int main() {
    FastIO;
    ll t;
    cin>>t;
    while(t--) {
        ll n, m, mul = 0, div = 0;
        cin >> n >> m;
        mul = n * m;
        div = mul / 2;
        if (mul % 2 == 0) {
            cout << div << endl;
        } else
            cout << div + 1 << endl;
    }
    return 0;
}