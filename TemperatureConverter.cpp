#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    float celsius, fer;
    cout<<"Enter temperature in celsius :"<<endl;
    cin>>celsius;

    fer = (celsius *1.8) + 32;

    cout<<fixed<<setprecision(2)<<endl;
    cout<<"temperature in Fahrenheit " << fer ;



}