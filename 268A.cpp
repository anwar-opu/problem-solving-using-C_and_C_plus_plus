#include<bits/stdc++.h>

using namespace std;
int main(){
    vector<pair<int,int>> v_p;
    int n,count=0;
    cin>>n;
    for(int i=0 ; i < n ; i++){
        int x,y;
        cin>>x>>y;
        v_p.emplace_back(x,y);

    }

//display :
//    for (int i = 0; i < n; i++) {
//        cout<<v_p[i].first<<" "<<v_p[i].second<<endl;
//    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if(v_p[i].first == v_p[j].second){
                count++;
            }
        }
    }
    cout<<count<<endl;

  return 0;
}