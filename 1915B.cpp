#include<bits/stdc++.h>
#define ll long long int
#define FastIO ios_base::sync_with_stdio(false), cin.tie(0)
using namespace std;
int main() {
    FastIO;
    ll t;
    cin>>t;
    while(t--) {
        string s[4];
        int  countA = 0, countB = 0, countC = 0;
        for (int i = 0; i < 3; i++) {
            cin >> s[i];
        }
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; ++j) {
                if (s[i][j] == 'A') {
                    countA++;
                }else if(s[i][j] == 'B'){
                    countB++;
                }else if(s[i][j] == 'C'){
                    countC++;
                }}
        }

        if (countA == 3 && countB== 3) {
            cout << "C" << endl;
        } else if (countA == 3 && countC == 3) {
            cout << "B" << endl;
        } else if (countB == 3 && countC == 3) {
            cout << "A" << endl;
        }
    }
}
