// A. Minutes Before the New Year
#include<bits/stdc++.h>
#define ll long long int
#define FastIO ios_base::sync_with_stdio(false), cin.tie(0)
using namespace std;
int main(){
    FastIO;
    int t;
    cin>>t;
    while(t--) {
        ll hour, min, result = 0;
        cin >> hour >> min;
        result = (23 - hour) * 60 + (60 - min);
        cout << result << endl;
    }
    return 0;
}
