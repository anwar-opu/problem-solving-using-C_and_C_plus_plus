#include<iostream>
#include <iomanip>
#include<conio.h>
using namespace std;

int main(){
    double base,height, area;

    cout<< " Enter Base :"<<endl;
    cin>> base;

    cout<< " Enter height :"<< endl;
    cin>> height;

    area = 0.5 * base * height;

    cout << setw (20)<< " Area of triangle :"<< area << endl;

    getch();
}