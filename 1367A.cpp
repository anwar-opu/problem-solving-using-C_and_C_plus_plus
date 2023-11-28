// A. Short Substrings
#include<bits/stdc++.h>
#define ll long long int
#define FastIO ios_base::sync_with_stdio(false), cin.tie(0)
using namespace std;
int main(){
    FastIO;
    int t;
    cin>>t;
    while(t--) {
        string a;
        string b;
        cin >> b;
        a = b.substr(0, 2);
        for (int i = 3; i < b.size(); i += 2) {
            a = a + b[i];
        }
        cout << a << endl;
    }
}