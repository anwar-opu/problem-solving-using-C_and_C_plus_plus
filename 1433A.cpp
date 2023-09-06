#include<bits/stdc++.h>
#define ll long long int
#define FastIO ios_base::sync_with_stdio(false), cin.tie(0)
using namespace std;
int main(){
    FastIO;
    int t;
    cin >> t;
    while (t--) {
        string x;
        cin >> x;
        int dig = x[0] - 49;
        int len = x.size();
        cout << dig * 10 + len * (len + 1) / 2 << endl;
    }

    return 0;
}