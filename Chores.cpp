#include<bits/stdc++.h>
using namespace std;


int main(){
    int n,a,b;
    int c[2001];
    cin>>n>>a>>b;
    for (int i = 0; i < n; i++) {
        cin>>c[i];
    }
    sort(c,c+n);
    cout<<c[b]-c[b-1];
}