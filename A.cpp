#include<bits/stdc++.h>
#define ll long long int
using namespace std ;

int main(){
    int test;
    cin>>test;
    while(test--){
        string s , r;
        cin>> s;

        ll p, cost =0, c[30]={};
        cin>> p ;

        for (char i : s) {
            cost += i - 96;
//            cout<<cost<<" ";
        }
        r = s ;
        sort(s.begin(), s.end());

        for (int i = s.size()-1 ; i >= 0 ; i--) {
            if(cost<=p) break ;
            cost -= s[i] - 96 ;
            c[s[i]-96]++;
        }
        for (char i : r) {
            if(c[i-96]==0) cout<<i;
            else c[i-96]--;
        }
        cout<<endl;


    }

}

