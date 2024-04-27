#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define FastIO ios_base::sync_with_stdio(false), cin.tie(0)
int main() {
    FastIO;
    int a,b,c;
    int t;
    cin>>t;
    while(t--) {
        cin >> a >> b >> c;
        if (a < b && b < c) {
            cout << "STAIR" << endl;
        } else if (a < b && b > c) {
            cout << "PEAK" << endl;
        } else
            cout << "NONE" << endl;
    }

}
