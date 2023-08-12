#include<bits/stdc++.h>
#define FastIO ios_base::sync_with_stdio(false), cin.tie(0)
using namespace std;

int main() {
    FastIO;
    long long int t;
    cin >> t;
    while (t--) {
        long long int a[100], m = 0;
        long long int n;
        cin >> n;
        for (long long int i = 1; i <= n; i++) {
            cin >> a[i];
        }

        if(is_sorted(a,a+n)) {
            cout<<m<<endl;
        }
        else {
            for (long long int i = 1; i < n ; i++) {
                if(a[i]>m && a[i]>a[i+1])
                    m=a[i];
            }
            cout<<m<<endl;
        }
    }
}