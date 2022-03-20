#include<iostream>
using namespace std;

int main() {
/*{
    int a;
    float b;
    char ch;
    char arr[20];

    int c = sizeof(a);
    cout<<c;
}*/
    int a, b, sum;

    sum = (a = 10, b = 20, sum = a + b);

    cout << sum;
}