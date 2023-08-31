#include<bits/stdc++.h>
#define ll long long int
#define FastIO ios_base::sync_with_stdio(false), cin.tie(0)
using namespace std;
int main(){
    FastIO;
    int t;
    cin>>t;
    while(t--) {
        string str;
        int myint = 0, sum1 = 0, sum2 = 0;
        int i = 0;
        cin >> str;
        // type of explicit type casting
        myint = stoi(str);
        while (myint != 0) {

            if (i < 3) {
                sum1 = sum1 + myint % 10;
                i++;
            } else {
                sum2 = sum2 + myint % 10;
                i++;
            }

            myint = myint / 10;
        }
        if (sum1 == sum2) {
            cout << "YES" << endl;
        } else
            cout << "NO" << endl;
    }
    return 0;

}