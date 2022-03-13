#include <iostream>

using namespace std;

int main(){

    int num1 ,num2;

    cout<< "Enter any number : "<<endl;
    cin>> num1;
    cin>> num2;

    for (int i = num1; i <= num2 ; i++){
        switch (i) {
            case 1 :
                cout << "one" << endl;
                break;
            case 2 :
                cout << "two" << endl;
                break;
            case 3 :
                cout << "three" << endl;
                break;
            case 4 :
                cout << "four" << endl;
                break;
            case 5 :
                cout << "five" << endl;
                break;
            case 6 :
                cout << "six" << endl;
                break;
            case 7 :
                cout << "seven" << endl;
                break;
            case 8 :
                cout << "eight" << endl;
                break;
            case 9 :
                cout << "nine" << endl;
                break;
            default:
                continue;
        }
    }
    if (num2>=10) {
        for (int j = 10; j <= num2; j++) {
            if (j % 2 == 0) {
                cout << "even" << endl;
            } else
                cout << "odd" << endl;
        }
    }
    return 0;

}
