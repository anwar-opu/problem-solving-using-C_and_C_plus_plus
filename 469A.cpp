#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v;

    int level,x,y,count = 0;
    cin>>level;
    cin>>x;
    for (int i = 0; i < x; i++) {
        int z;
        cin>>z;
        v.push_back(z);
    }
    int b = x;
    cin>>y;
    x = x+y;
    for (int i = b ; i < x; i++) {
        int a;
        cin>>a;
        v.push_back(a);
    }
//    sort(v.begin(),v.end());
//    for (int i = 0; i < x; i++) {
//        cout<<v[i]<<" ";
//    }

    for (int i = 0; i < x; i++) {
       if(v[i] != v[i+1]){
           count++;
       }
    }
    //cout<<count;

    if(count == level){
        cout<<"I become the guy.";
    }
    else
        cout<<"Oh, my keyboard!";
    return 0;
}