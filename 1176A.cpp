#include<bits/stdc++.h>
#define FastIO ios_base::sync_with_stdio(false), cin.tie(0)
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--) {
        long long int num, count = 0, flag = 0;
        cin >> num;
        while (num != 1) {
            if (num % 2 == 0) {
                num = num / 2;
                count++;
            }
            if (num % 3 == 0) {
                num = (num * 2) / 3;
                count++;
            }
            if (num % 5 == 0) {
                num = (num * 4) / 5;
                count++;
            }
            if (num == 1) {
                break;
            }
            if (num % 2 != 0 && num % 3 != 0 && num % 5 != 0) {
                flag = 1;
                break;
            }
        }
        if (flag == 1) {
            cout << "-1" << endl;
        } else {
            cout << count << endl;
        }
    }
}
