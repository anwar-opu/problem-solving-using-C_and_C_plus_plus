#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v;
    int n,count=1,temp;
    cin>>n;

    for (int i = 0; i < n; i++) {
        int x;
        cin>>x;
        v.push_back(x);
    }
    int i=0;
    temp = v[0];
   while( i < n) {

       if (v[i] == temp) {
           i++;
           continue;
       } else {
           count++;
           temp = v[i];
           i++;
       }
   }

    cout<<count;

}