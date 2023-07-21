#include<bits/stdc++.h>
using namespace std;

int main(){

    int t=0;
    cin>>t;
    while(t--) {
       int n, count=0;
        vector<int> v;
        cin >> n;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            v.push_back(x);
        }
        sort(v.begin(), v.end());

            for (int i = 1; i < n ; i++) {

                if(v[i]-v[i-1]>1) {
                    count++;
                    break;
                }
            }
            if(count==0) {
                cout <<"YES"<<endl;
            }
            else
                cout<<"NO"<<endl;
    }
 return 0;
}