#include<bits/stdc++.h>
#define ll long long int
#define FastIO ios_base::sync_with_stdio(false), cin.tie(0)
using namespace std;
int main(){
    FastIO;
    int t;
    cin>>t;
    while(t--) {
        int a, b, c, d1, d2;
        cin >> a >> b >> c;
        d1 = abs(a - 1);
        d2 = abs(b - c) + abs(c - 1);
        if (d1 < d2) {
            cout << "1" << endl;
        } else if (d1 > d2) {
            cout << "2" << endl;
        } else
            cout << "3" << endl;
    }
    return 0;
}