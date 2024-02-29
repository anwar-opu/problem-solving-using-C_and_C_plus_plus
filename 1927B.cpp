#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define FastIO ios_base::sync_with_stdio(false), cin.tie(0)
int main(){
    FastIO;
    int t;
    cin>>t;
    while(t--) {
        string str = "abcdefghijklmnopqrstuvwxyz";
        map<char, int> mp;
        for (int i = 0; i < str.size(); i++) {
            mp[str[i]] = 0;
        }
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
            for (auto &pr: mp) {
                if (pr.second == v[i]) {
                    cout << pr.first;
                    pr.second++;
                    break;
                }
            }
        }
        cout << endl;
    }
}
