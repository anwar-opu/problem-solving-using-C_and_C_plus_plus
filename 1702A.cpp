#include<bits/stdc++.h>
#define ll long long int
#define FastIO ios_base::sync_with_stdio(false), cin.tie(0)
using namespace std;
int main(){
    FastIO;
    ll t;
    cin>>t;
    while(t--) {
        ll n, result = 0, temp = 0, min = 10000000000;
        cin >> n;
        for (int i = 0; i < 10; i++) {
            result = pow(10, i);
            temp = n - result;
            if (temp < min && temp >= 0) {
                min = temp;
            }
        }
        cout << min << endl;
    }
    return 0;
}
