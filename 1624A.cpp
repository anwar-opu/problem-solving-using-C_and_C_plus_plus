#include<bits/stdc++.h>
#define ll long long int
#define FastIO ios_base::sync_with_stdio(false), cin.tie(0)
using namespace std;
int main(){
    FastIO;
    int t;
    cin>>t;
    while(t--) {
        vector<ll> v;
        int n, max = 0, min = 0;
        cin>>n;
        for (int i = 0; i < n; i++) {
            int x;
            cin>>x;
            v.push_back(x);
        }
        max = *max_element(v.begin(), v.end());
        min = *min_element(v.begin(), v.end());
        cout<<max - min<<endl;


    }
}

