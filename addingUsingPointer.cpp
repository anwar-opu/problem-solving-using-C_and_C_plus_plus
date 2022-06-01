#include<iostream>
using namespace std;
int main(){
    int a = 10, b=50, sum ;
    int *p = &a;
    int *q = &b;

    sum = *p + *q;
    cout<<&p<<endl;
    cout<<sum<<endl;

}