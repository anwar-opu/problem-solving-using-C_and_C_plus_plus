#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--) {
        int n;
        int arr[100002];
        float count = 0;
        cin >> n;
        for (int i = 1; i <= n; i++) {
            cin >> arr[i];
        }
//        for (int i = 1; i <= n; i++) {
//            cout << arr[i] << " ";
//        }
        for (int i = 1; i <= n; i++) {
            if (arr[i] == i) {
                count++;
            }
        }
        cout << ceil(count / 2)<<endl;
    }

    return 0;

}