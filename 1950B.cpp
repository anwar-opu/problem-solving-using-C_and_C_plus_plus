#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define FastIO ios_base::sync_with_stdio(false), cin.tie(0)
int main() {
    FastIO;
    int n,hash=0,dot=0;
    cin>>n;
    for (int i = 1; i <= n*2; i++) {
        for(int j=1 ; j<=n ; j++){
             {
                cout << i << j << " ";
                cout<<"##";
            }
        }
        cout<<endl;
    }
}