#include<bits/stdc++.h>
#define ll long long int
#define FastIO ios_base::sync_with_stdio(false), cin.tie(0)
using namespace std;
int main() {
    FastIO;
    int t;
    cin>>t;
    while(t--) {
        char c[10] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h'};
        char s[5];
        cin >> s;

        for (int i = 1; i < 9; i++) {
            if (int(s[1] - '0') == i) {
                continue;
            } else {
                cout << s[0] << i << endl;
            }
        }
//    int n = stoi(s[1]);
//    cout<<"sssss"<<int(s[1]-'0')<<endl;
        for (int i = 0; i < 8; i++) {
            if (s[0] == c[i]) {
                continue;
            } else {
                cout << c[i] << s[1] << endl;
            }
        }
    }
    return 0;
}