#include<bits/stdc++.h>

using namespace std;
int main(){

    int t;
    cin>>t;
    while(t--) {
        int n, ans, x = 0;
        vector<int> v;
        cin >> n;

        if (n % 10 != 0) {
            x = n % 10;
            v.push_back(x);
        }
        ans = n % 10;
        n -= ans;

        if (n % 100 != 0) {
            x = n % 100;
            v.push_back(x);
        }
        ans = n % 100;
        n -= ans;

        if (n % 1000 != 0) {
            x = n % 1000;
            v.push_back(x);
        }
        ans = n % 1000;
        n -= ans;

        if (n % 10000 != 0) {
            x = n % 10000;
            v.push_back(x);
        }
        ans = n % 10000;
        n -= ans;

        if (n >= 10000 && n % 10000 == 0) {
            v.push_back(n);
        }
        cout << v.size() << endl;
        for (int i : v) {
            cout<<i<<" ";
        }
        cout<<endl;
    }

    return 0;
}