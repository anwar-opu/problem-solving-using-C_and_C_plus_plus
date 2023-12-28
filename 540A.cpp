#include<bits/stdc++.h>
#define ll long long int
#define FastIO ios_base::sync_with_stdio(false), cin.tie(0)
using namespace std;
int main(){
    FastIO;
    string a;
    string b;
    ll n,sum =0;
    cin>>n;
    cin>>a;
    cin>>b;
    for (int i = 0; i < n; i++) {
        sum = sum + min(abs(a[i]-b[i]), 10 - abs(a[i]-b[i]));
    }
    cout<<sum<<endl;
//    cout << typeid(sum).name() << endl;
}
