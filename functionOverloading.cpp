#include <iostream>

using namespace std;
void sum(int a, int b){
    int add = a + b;
    cout<<"sum = " << add << endl;
}
void sum(int a, int b , int c){
    int add = a + b + c;
    cout<<"sum = " << add << endl;
}


int main(){
    sum (5,6);
    sum (5,6,7);
}