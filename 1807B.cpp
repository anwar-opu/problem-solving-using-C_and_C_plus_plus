#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--) {
        int n, MihaiC = 0, Bianca = 0;
        vector<int> v;
        cin >> n;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            v.push_back(x);
        }
        for (int i = 0; i < n; i++) {
            if (v[i] % 2 == 0) {
                MihaiC = MihaiC + v[i];
            } else
                Bianca = Bianca + v[i];
        }
        if (MihaiC > Bianca) {
            cout << "YES" << endl;
        } else cout << "NO" << endl;
    }
    return 0;
}