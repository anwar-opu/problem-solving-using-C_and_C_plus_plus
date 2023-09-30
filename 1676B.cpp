// B. Equal Candies
#include<bits/stdc++.h>
#define ll long long int
#define FastIO ios_base::sync_with_stdio(false), cin.tie(0)
using namespace std;
int main(){
    FastIO;
    int t;
    cin>>t;
    while(t--) {
        vector<ll> v;
        ll n, min = 0, sum = 0;
        cin >> n;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            v.push_back(x);
        }
        min = *min_element(v.begin(), v.end());
        for (int i = 0; i < n; i++) {
            sum += v[i] - min;
        }
        cout << sum << endl;

    }
    return 0;
}