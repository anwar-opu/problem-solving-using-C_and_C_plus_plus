#include<iostream>

using namespace std;
int main () {
    int num1, num2, num3, chooseNum;

    cout << "choose any one !!!" << endl << "1.large number " << endl << "2. Small number" << endl;
    cin >> chooseNum;
    if (chooseNum == 1) {

        cout << "Enter three  number : " << endl;
        cin >> num1 >> num2 >> num3;
        if (num1 < num2) {
            if (num2 > num3) {
                cout << num2 << endl;
            } else {
                cout << num3 << endl;
            }
        } else if (num2 < num1 && num3 < num1) {
            cout << num1 << endl;
        }
    } else if (chooseNum == 2) {

        cout << "Enter three  number : " << endl;
        cin >> num1 >> num2 >> num3;

        if (num1 < num2) {
            if (num1 < num3) {
                cout << num1;
            } else {
                cout << num3;
            }
        } else if (num2 < num1 && num2 < num3) {
            cout << num2 << endl;
        } else if (num3 < num1 && num3 < num2) {
            cout << num3 << endl;
        }

        cout << " thank you :-) " << endl;
    }
}