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
        cin >> a;
        if (a == "abc") {
            cout << "YES" << endl;
        } else if (a == "acb") {
            cout << "YES" << endl;
        } else if (a == "bac") {
            cout << "YES" << endl;
        } else if (a == "cba") {
            cout << "YES" << endl;
        } else
            cout << "NO" << endl;

    }
    return 0;
}