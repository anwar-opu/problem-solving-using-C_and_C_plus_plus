#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,flag=0;
    vector<int> v;
    cin>>n;
    for (int i = 0; i < n; i++) {
        int x;
        cin>>x;
        v.push_back(x);
    }
    for (int i = 0; i < n; i++) {
        if(v[i]==1){
            cout<<"HARD"<<endl;
            break;
        }
        else
            flag++;
    }
    if(n==flag){
        cout<<"EASY"<<endl;
    }

    return 0;
}