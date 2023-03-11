#include<bits/stdc++.h>
using namespace std;

void display(int count){
    cout<<count<<endl;
}

int main(){
    vector<pair<int,int>> v;
    int n,count=0;
    cin>>n;
    for(int i=0; i<n ; i++){
        int x,y;
        cin>>x>>y;
        v.push_back({x,y});

    }
    for (int i = 0; i < n; i++) {
        if(v[i].first+1 <v[i].second){
            count++;
        }
    }
    display(count);

    return 0;
}
