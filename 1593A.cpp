#include<bits/stdc++.h>
#define ll long long int
#define FastIO ios_base::sync_with_stdio(false), cin.tie(0)
using namespace std;
int main(){
    FastIO;
    ll t;
    cin>>t;
    while(t--) {
        ll a, b, c, maxVote = 0;
        cin >> a >> b >> c;
        maxVote = max(a, max(b, c));
        if (a == b && a == c && b == c) {
            a++, b++, c++;
            cout << a << " " << b << " " << c << endl;
        }else if(maxVote==a && maxVote==b || maxVote==b && maxVote==c || maxVote==a && maxVote==c){
            a = (maxVote-a)+1;
            b = (maxVote-b)+1;
            c = (maxVote-c)+1;
            cout << a << " " << b << " " << c << endl;
        }
        else if (b <= a && c <= a) {
            b = (maxVote - b) + 1;
            c = (maxVote - c) + 1;
            a = maxVote - a;
            cout << a << " " << b << " " << c << endl;
        } else if (a <= b && c <= b) {
            a = (maxVote - a) + 1;
            c = (maxVote - c) + 1;
            b = maxVote - b;
            cout << a << " " << b << " " << c << endl;
        } else if (a <= c && b <= c) {
            a = (maxVote - a) + 1;
            b = (maxVote - b) + 1;
            c = maxVote - c;
            cout << a << " " << b << " " << c << endl;
        }
    }
}