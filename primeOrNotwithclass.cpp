#include<iostream>
#include<conio.h>

using namespace std;

// Class Declaration

class prime {
    //Member Variable Declaration
    int a, k, i;
public:

    prime(int x) {
        a = x;
    }

    // Object Creation For Class

    void calculate() {
        k = 1;
        {
            for (i = 2; i <= a / 2; i++)
                if (a % i == 0) {
                    k = 0;
                    break;
                } else {
                    k = 1;
                }
        }
    }

    void show() {
        if (k == 1)
            cout << "\n" << a << " is Prime Number.";
        else
            cout << "\n" << a << " is Not Prime Numbers.";
    }
};

//Main Function

int main() {
    int a;
    cout << "Enter the Number:";
    cin>>a;

    // Object Creation For Class
    prime obj(a);

    // Call Member Functions
    obj.calculate();
    obj.show();
    getch();
    return 0;
}