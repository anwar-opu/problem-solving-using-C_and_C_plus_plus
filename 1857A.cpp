#include<bits/stdc++.h>
#define FastIO ios_base::sync_with_stdio(false), cin.tie(0)
using namespace std;
int main(){
    FastIO;
    int t;
    cin>>t;
    while(t--) {
        int arr[1000];
        int n, sum = 0;
        cin >> n;
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        for (int i = 0; i < n; i++) {
            sum = sum + arr[i];
        }
        if (sum % 2 == 0) {
            cout << "YES" << endl;
        } else
            cout << "NO" << endl;
    }
}