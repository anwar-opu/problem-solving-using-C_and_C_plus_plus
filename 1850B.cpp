

#include <bits/stdc++.h>
using namespace std;


int main() {
    int t;
    cin>>t;
    while(t--){
        int n, count = 0, max = 0, maxi = 0;
        // declaring vector of pairs
        vector<pair<int, int> > vect;

    // initializing 1st and 2nd element of
    // pairs with array values
    int arr[100];
    int arr1[100];
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i] >> arr1[i];
    }

    // Entering values in vector of pairs
    for (int i = 0; i < n; i++)
        vect.emplace_back(arr[i], arr1[i]);

//    cout << "The vector before applying sort is:\n";
    for (int i = 0; i < n; i++) {


        if (vect[i].first <= 10) {
//            cout<< i<<" " << vect[i].first << " " << vect[i].second
//                << endl;
            if (max < vect[i].second) {
                max = vect[i].second;
                maxi = i + 1;
            }
        }
    }
//    cout<<max<<endl;
    cout << maxi << endl;

    }
    return 0;
}
