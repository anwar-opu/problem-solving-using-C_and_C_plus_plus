#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--) {
        int sum=0;
        vector<int> v;
        for (int i = 0; i < 3; i++) {
            int x;
            cin >> x;
            v.push_back(x);
        }
        sort(v.rbegin(), v.rend());
//        for (int i = 0; i < 3; ++i) {
//            cout << v[i];
//        }
        sum = v[0] + v[1];
        if(sum == 10 || sum > 10){
            cout<<"YES"<<endl;
        }
        else
            cout<<"NO"<<endl;
    }
    return 0;
}