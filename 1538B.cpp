#include<bits/stdc++.h>
#define ll long long int
#define FastIO ios_base::sync_with_stdio(false), cin.tie(0)
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--) {
        vector<int> v;
        int div=0,res =0,sum=0;
        int n;
        cin>>n;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            v.push_back(x);
        }
        for (int i = 0; i < n; i++) {
            sum = v[i] + sum;
        }
         div = sum % n;
         res = sum / n;
        int count = 0;
        if (div == 0) {
            for (int i = 0; i < n; i++) {
                if (res < v[i]) {
                    count++;
                }
            }
            cout<<count<<endl;
        } else
            cout << "-1" << endl;
    }

}