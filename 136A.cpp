#include<bits/stdc++.h>

using namespace std;

//void display(vector<int> &v) {
//    for (int i = 0; i < v.size(); i++) {
//        cout<<v[i]<<" ";
//    }
//}

int main(){
    int n;
    vector<int> v;
    vector<int> v1;

    cin>>n;
    for (int i = 0; i < n ; i++) {
        int x;
        cin>>x;
        v.push_back(x);
    }

    //copy vector
    v1 = v ;
    //display(v);

    sort(v1.begin(),v1.end());

    //display(v1);
    for (int i = 0; i < n ; i++) {
        for (int j = 0; j < n ; ++j) {
            if(v1[i]== v[j]){
                cout<<++j<<" ";
            }
        }

    }
    return 0;
}