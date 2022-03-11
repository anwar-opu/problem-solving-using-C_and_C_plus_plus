#include<iostream>
#include<conio.h>
#include<iomanip>

using namespace std;

int main(){
    float num1, num2,sum,sub,multi ;
    double div, rem ;

    cout<< "Enter two Number :" <<endl;
    cin>> num1 >> num2;

    cout <<fixed<<setprecision(5);
    sum= num1 + num2;
    cout <<setw(20 )<< "sum is :"<< sum<< endl;


    sub= num1 - num2 ;
    cout<<setw(20 )<< "subtraction is :"<< sub<< endl;


    multi = num1 * num2;
    cout<<setw(20 ) << "multiple is : " <<multi<< endl;

    cout<<fixed<<setprecision(7);
    div = (float )num1 / num2;
    cout<<setw(20) << "division is : "<< div <<endl;


    getch();

}