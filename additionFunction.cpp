#include<iostream>
using namespace std;


int addition (int a , int b){
    int sum = a + b;
    return sum;
}
int subtract (int a , int b){
    int sub = a-b;
    return sub;

}
int multiplication (int a , int b){
    int mul = a * b;
    return mul;
}

int main (){

    int a, b, sum, sub, mul;

    cin>>a>>b;

    //function
    sum = addition(a,b);
    sub = subtract(a,b);
    mul = multiplication(a,b);

    cout<< "addition  = " << sum<< endl;
    cout<< "subtract  = " << sub<< endl;
    cout<< "multiplication  = " << mul << endl;
}
