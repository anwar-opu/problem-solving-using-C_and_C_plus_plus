#include <iostream>
#include <cstdio>
#include <bits/stdc++.h>

using namespace std;

int main() {
    int num1;
    long num2;
    char str[100];
    float num3;
    double num4;

    cin>>num1;
    cin>>num2;
    cin>>str;
    cin>>num3;
    cin>>num4;


    cout<<num1<<endl;
    cout<<num2<<endl;
    cout<<str<<endl;
    cout<<  fixed << setprecision(3) <<num3 <<endl;
    cout<<  fixed << setprecision(9) <<num4 << endl;
    return 0;
}