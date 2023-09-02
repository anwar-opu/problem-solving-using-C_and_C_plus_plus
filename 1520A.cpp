#include<bits/stdc++.h>
#define ll long long int
#define FastIO ios_base::sync_with_stdio(false), cin.tie(0)
using namespace std;
int main(){
    FastIO;
    int t;
    cin>>t;
    while(t--) {
        int n, a = 0, flag = 0;
        string arr;
        char arr2[100];
        cin >> n;
        cin>>arr;
        for (int i = 0; i < n; i++) {
            if (arr[i] == arr[i + 1]) {
                continue;
            } else {
                arr2[a] = arr[i];
                a++;
            }
        }
        for (int i = 0; i < a; i++) {
//            cout << arr2[i] << " ";
            for (int j = i + 1; j < a; j++) {
                if (arr2[i] == arr2[j]) {
                    flag = 1;
                    break;
                }
            }

        }
        if (flag == 1) {
            cout << "NO" << endl;
        } else
            cout << "YES" << endl;
    }

}