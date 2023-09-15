#include<bits/stdc++.h>
#define ll long long int
#define FastIO ios_base::sync_with_stdio(false), cin.tie(0)
using namespace std;
int main(){
    FastIO;
    ll t;
    cin>>t;
    while(t--) {
        ll max = 0, min = 0;
        vector<ll> digit;
        for (int i = 0; i < 3; i++) {
            int x;
            cin >> x;
            digit.push_back(x);
        }
        max = *max_element(digit.begin(), digit.end());
        min = *min_element(digit.begin(), digit.end());
        for (int i = 0; i < 3; i++) {
            if (max != digit[i] && min != digit[i]) {
                cout << digit[i] << endl;
                break;
            }
        }
    }
    return 0;
}