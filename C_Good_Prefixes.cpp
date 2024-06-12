#include<bits/stdc++.h>
#define ll long long int
#define FastIO ios_base::sync_with_stdio(false), cin.tie(0)
using namespace std;
int main(){
    FastIO;
    int t;
    cin>>t;
    while(t--){
        ll n,index=0;
        cin>>n;
        vector <ll> v;
        for(int i=0; i<n; i++){
            int x;
            cin>>x;
            v.push_back(x);
        }
        int GoodArray=0;
        // if(v[0] == 0){
        //     GoodArray++;
        // }
        ll sum = 0;
        ll maximum = 0;
        ll Psum = 0;
        for(int i = 0 ; i < n; i++){
            sum = sum + v[i];

            maximum = max(maximum,v[i]);
            Psum = sum; //old sum;
            sum = sum - maximum;
            if(sum == maximum){
                GoodArray++;
            }
            sum = Psum;
            // cout<<maximum<<endl;
        }
        cout<<GoodArray<<endl;
    }
    return 0;
}