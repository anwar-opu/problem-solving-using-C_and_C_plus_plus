#include<bits/stdc++.h>
using namespace std;

int main(){

    int t=0;
    cin>>t;
    while(t--){
        int n, k,count=0,m=0;
        vector<int> v;
        cin>> n >> k;
        for (int i = 0; i < n; i++) {
            int x;
            cin>>x;
            v.push_back(x);
        }
        sort(v.begin(), v.end());
//        for (int i = 0; i < n; i++) {
//            cout<<v[i]<<" ";
//        }

        for (int i = 1; i < n; i++) {
    //        cout<<v[i]<<" ";
                if(abs(v[i-1]-v[i])<= k){
                    count++;

                }else {
                    m = max(count,m);
                    count = 0;
                }
        }if(n==1) {
//            m = max(count, m);
            cout << "0" <<endl;
        }else {
            m = max(count, m);
            cout << n-(m + 1)<<endl;
        }
    }

}