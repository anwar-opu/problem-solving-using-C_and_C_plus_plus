#include<iostream>

using namespace std;

int main(){
    int year;

    cout<<"Enter any year :"<< endl;
    cin>>year;

    if ( year  % 4 == 0 && year % 100 != 0){

        cout<<" leap year " << endl;

    }else if ( year  % 400 == 0 ){

        cout<<" leap year " << endl;

    }  else {
        cout<< " Not leap year"<<endl;
    }

}
