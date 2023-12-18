#include<bits/stdc++.h>
#define ll long long int
#define FastIO ios_base::sync_with_stdio(false), cin.tie(0)
using namespace std;
int main(){
    FastIO;
    int t;
    cin>>t;
    while(t--) {
        ll count = 0;
        string pi = "3141592653589793238462643383279502884197169399375105820974944";
        string s;
        cin >> s;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == pi[i]) {
                count++;
            } else
                break;
        }
        cout << count << endl;
    }
}
