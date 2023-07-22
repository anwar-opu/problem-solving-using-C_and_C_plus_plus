#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--) {
        string colour[100];


        for (int i = 0; i < 8; i++) {
            cin >> colour[i];
        }


        for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 8; j++) {
                if ('a' <= colour[i][j])
                    cout << colour[i][j];

            }
        }
        cout<<endl;

    }
}