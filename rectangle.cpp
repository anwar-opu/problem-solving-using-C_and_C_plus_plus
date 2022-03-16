#include<iostream>
#include<conio.h>
#include<iomanip>

using  namespace std;

int main(){
    double width, height, area;

    cout << " Enter width :"<< endl;
    cin >> width;

    cout << " Enter height :"<< endl;
    cin>> height;

    area = width * height;

    cout << fixed << setprecision(4);
    cout << "Area of rectangle :"<< area << endl;

    getch();
}



