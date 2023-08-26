#include<bits/stdc++.h>
#define ll long long int
#define FastIO ios_base::sync_with_stdio(false), cin.tie(0)
using namespace std;
int main(){
    FastIO;
    ll t;
    cin>>t;
    while (t--) {
        ll arr[100];
        ll num, a = 0, sum = 0, count = 0;
        cin >> num;
        if (num % 4 == 0) {
            cout<<"YES"<<endl;
            for (int i = 1; i <= num; i++) {
                if (i % 2 == 0) {
                    cout<< i<<" ";
                    sum = sum + i;
                    a++;
                    count++;
                }
            }
            for (int i = 1; i < num - 1; i++) {
                if (i % 2 != 0) {
                    cout<< i <<" ";
                    sum = sum - i;
                    a++;
                    count++;
                }
            }
            cout<< sum <<endl;
            count++;
//            for (int i = 0; i < count; i++) {
//                cout << arr[i] << " ";
//            }
//            cout<<endl;
        } else
            cout << "NO" << endl;
    }

}