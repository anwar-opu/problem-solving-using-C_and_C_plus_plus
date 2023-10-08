#include<bits/stdc++.h>
#define ll long long int
#define FastIO ios_base::sync_with_stdio(false), cin.tie(0)
using namespace std;
int main(){
    FastIO;
    int t;
    cin>>t;
    while(t--) {
        string s;
        int sum = 0;
        vector<int> v;
        cin >> s;
        for (char i: s) {
            if (47 < i) {
                int x = i - 48;
                v.push_back(x);
            }
        }
        for (int i : v) {
            sum = sum + i;
        }
        cout << sum << endl;
    }
    return 0;
}
