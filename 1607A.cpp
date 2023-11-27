#include<bits/stdc++.h>
#define ll long long int
#define FastIO ios_base::sync_with_stdio(false), cin.tie(0)
using namespace std;
int main() {
    FastIO;
    int t;
    cin >> t;
    while (t--) {
        string s1, s2;
        int flag = 0, sum = 0, a, b, ok = 0;
        cin >> s1;
        cin >> s2;
        for (int i = 0; i < s2.size(); i++) {

            for (int j = 0; j < s1.size(); j++) {

                if (s2[i] == s1[j] && flag == 0) {
                    a = j + 1;
//                    cout << "A" << a << endl;
                    flag++;
                    break;
                } else if (s2[i] == s1[j] && flag == 1) {
                    b = j + 1;
                    flag--;
                    ok++;
//                    cout << "B" << b << endl;
                    break;
                }
            }
            if (ok != 0) {
                sum = sum + abs(a - b);
            }
        }
        cout << sum << endl;
    }
}