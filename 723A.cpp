#include<bits/stdc++.h>

using namespace std;

int main(){
    vector<int> v;
    int n = 3,max=0,min=0;
    for (int i = 0; i < n; i++) {
        int x;
        cin>>x;
        v.push_back(x);
    }
    max = *max_element(v.begin(), v.end());
    min = *min_element(v.begin(), v.end());
    cout<<(max-min)<<endl;
}
