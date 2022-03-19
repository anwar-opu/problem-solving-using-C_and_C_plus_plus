#include <iostream>

using namespace std;

int main(){
    int a,b, AND , OR , XOR;

    cout <<" Enter A and B:"<< endl;
    cin>> a>>b;

    AND = a & b; // symbol and = &
    OR = a || b;  // symbol or = ||
    XOR = a ^ b; // symbol xor = ^

    cout<<"bitwise AND:"<< AND<<endl;
    cout<<"bitwise OR:"<< OR<<endl;
    cout<<"bitwise XOR:"<< XOR<<endl;



}