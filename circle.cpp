#include<iostream>
#include<conio.h>
#include<bits/stdc++.h>
#define PI 3.14

using namespace std;

int main(){
    double area, radius;

    cout<<"Enter radius of circle :"<<endl;
    cin>>radius;

    area = PI * radius * radius ;

    cout<<fixed<<setprecision(2)<<endl;
    cout<< "Area of circle is : "<< area <<endl;

    getch();

}