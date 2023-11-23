#include<bits/stdc++.h>
#define ll long long int
#define FastIO ios_base::sync_with_stdio(false), cin.tie(0)
using namespace std;
int main(){
    FastIO;
    ll t;
    cin>>t;
    while(t--) {
        ll a, b, n, tempSum = 0, count = 0;
        cin >> a >> b >> n;
        while (1) {
            if (a <= n && b <= n) {
                tempSum = a + b;
                if (a < b) {
                    a = tempSum;
                } else
                    b = tempSum;
                count++;
            } else
                break;
        }
        cout << count << endl;
    }
    return 0;
}