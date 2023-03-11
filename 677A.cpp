#include <bits/stdc++.h>
using namespace std;
int main(){
    int width = 0 ;
    vector<int> v;
    int friends, height;
    cin>> friends>> height;
    for (int i = 0; i < friends; i++) {
        int x;
        cin>>x;
        v.push_back(x);
    }


    for (int i = 0; i < friends; i++) {
        if(height<v[i]){
            width += 2 ;
        }
        else width++;
    }
    cout<< width;
}