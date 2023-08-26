#include<bits/stdc++.h>
#define ll long long int
#define FastIO ios_base::sync_with_stdio(false), cin.tie(0)
using namespace std;
int main() {
    FastIO;
    int t;
    cin>>t;
    while(t--) {
        ll a, b, c, d;
        int count = 0;
        cin >> a >> b >> c >> d;
        if (a < b) {
            count++;
        }if (a < c) {
            count++;
        }if (a < d) {
            count++;
        }
        cout << count << endl;
    }
}
