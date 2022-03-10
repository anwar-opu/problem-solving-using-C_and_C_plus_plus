#include<iostream>
#include<conio.h>

using namespace std;

int main(){
    int num1, num2,sum,sub,multi ;
    double div, rem ;

    cout<< "Enter two Number :" <<endl;
    cin>> num1 >> num2;

    sum= num1 + num2;
    cout<< "sum is :"<< sum<< endl;

    sub= num1 - num2 ;
    cout<< "subtraction is :"<< sub<< endl;

    multi = num1 * num2;
    cout << "multiple is : " <<multi<< endl;

    div = (float )num1 / num2;
    cout << "division is : "<< div <<endl;

    rem = num1 % num2 ;
    cout <<"Remainder is : "<< rem << endl;


    getch();

}