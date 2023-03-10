#include<bits/stdc++.h>

using namespace std;
//void display(vector<int> &v){
//    cout<< " value : ";
//    for(auto value : v){
//
//        cout<<value<<" ";
//    }
//
//}
int main(){
    int t;
    cin>>t;
    while(t--){
    int n, sum =0;
    int result =0;
    vector<int> v;
    vector<int >v1;
    int temp = 0;
    cin>>n;
    for (int i = 0; i < n; i++) {
        int x;
        cin>>x;
        v.push_back(x);
    }

    sort(v.begin(), v.end(), greater<int>());

    for (int i : v) {
        if(i > 0) {
            sum++;
            cout <<sum<<" ";
        }
        else {
            sum--;
            cout << sum<<" ";
        }
    }
    //display(v);
    cout<<endl;
    sort(v.begin(), v.end());
    int i = 0;
    int j = v.size() - 1;
    while (i < j) {
        if (abs(v[i]) == abs(v[j])) {
            if(v[i] < 0) {

                cout<<++result<<" "<<--result<<" ";
                //cout << "Found a pair: " << v[j] << " " << v[i] << endl;
                temp =  temp+2;
                ++i;
                --j;
            }
        } else if (abs(v[j]) < abs(v[i])) {
            ++i;
        } else {
            --j;
        }
    }
    //cout<<"temp: "<<temp;
    for (int k = 0 ; k < n-temp ; k++) {
        cout<<++result<<" ";

    }
    cout<<endl;
    }


    //    for (int i = 0; i < v.size(); i++) {
//        for (int j = n ; j > 0 ; j--) {
//            if(v[i]==abs(v[j])){
//                cout<<" "<<v[i]<<" "<<v[j]<<" ";
//
//            }
//        }
//    }
}