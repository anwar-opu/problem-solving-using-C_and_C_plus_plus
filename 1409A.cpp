#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>> t;
    while(t--) {
        double num1, num2, dif = 0;
        double step = 0;
        cin >> num1 >> num2;
        if (num1 == num2) {
            cout << step<<endl;
        }
        if (num1 < num2) {
            dif = num2 - num1;
            step = double(dif) / double(10.00);

            printf("%.f\n", ceil(step));
        } else if (num1 > num2) {
            dif = num1 - num2;
            step = double(dif) / double(10.00);
            printf("%.f\n", ceil(step));
        }
    }


    return 0;
}