#include<bits/stdc++.h>
#define ll long long int
#define FastIO ios_base::sync_with_stdio(false), cin.tie(0)
using namespace std;
int main(){
    FastIO;
    int t;
    cin>>t;
    while(t--) {
        string s,s1;
        int flag = 1;
        ll n;
        cin>>n;
        cin>> s >>s1;
        for (int i = 0; i < n; i++) {
            if(s[i] == 'R'){
                if(s1[i] != 'R'){
                    cout<<"NO"<<endl;
                    flag = 0;
                    break;
                }
            }
            else {
                if (s1[i] == 'R') {
                    cout << "NO"<<endl;
                    flag = 0;
                    break;
                }
            }
        }
        if(flag == 1) {
            cout << "YES" << endl;
        }
    }
    return 0;
}
