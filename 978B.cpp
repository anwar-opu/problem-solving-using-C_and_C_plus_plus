#include<bits/stdc++.h>
#define ll long long int
#define FastIO ios_base::sync_with_stdio(false), cin.tie(0)
using namespace std;
int main(){
    FastIO;
    string s;
    ll n,countX =0, result = 0;
    cin>>n;
    cin>>s;
    for (int i = 0; i < s.size(); i++) {
        if(s[i] == 'x'){
            countX++;
        }
        if(s[i]!= 'x' && countX>2 || i == s.size()-1 && countX > 2){
            result = result + countX - 2;
            countX = 0;
        }
        else if(s[i] != 'x'){
            countX = 0;
        }
    }
    if(countX == n){
        cout<<countX-2;
    }
    else
        cout<<result;

}