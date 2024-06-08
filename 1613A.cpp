#include<bits/stdc++.h>
#define FastIO ios_base::sync_with_stdio(false), cin.tie(0)
using namespace std;
int main(){
    FastIO;
    int t;
    cin>>t;
    while(t--) {
        long long int x1, p1, x2, p2, sumx1 = 0, sumx2 = 0;
        cin >> x1 >> p1;
        cin >> x2 >> p2;
        for (int i = 0; i < p1; i++) {
            sumx1 = x1 * 10;
            x1 = sumx1;
        }
        for (int i = 0; i < p2; i++) {
            sumx2 = x2 * 10;
            x2 = sumx2;
        }
//        cout << x1 << endl;
//        cout << x2 << endl;
        if (x1 > x2) {
            cout << ">" << endl;
        } else if (x1 < x2) {
            cout << "<" << endl;
        } else
            cout << "=" << endl;
    }
    return 0;
}