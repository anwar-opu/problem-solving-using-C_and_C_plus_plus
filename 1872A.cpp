#include<bits/stdc++.h>
#define ll long long int
#define FastIO ios_base::sync_with_stdio(false), cin.tie(0)
using namespace std;
int main(){
    FastIO;
    int t;
    cin>>t;
    while(t--) {
        ll a, b, c, count = 0, highest = 0, lowest = 0;
        cin >> a >> b >> c;
        highest = max(a, b);
        lowest = min(a, b);
        while (highest > lowest) {
            highest = highest - c;
            lowest = lowest + c;
            count++;
        }
        cout << count << endl;
    }
}
