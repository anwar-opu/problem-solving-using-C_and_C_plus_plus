#include<iostream>
#include <string>

using namespace std;

int main(){
    string  name;
    char address [100];
    int phone_num ;
    cout << " Enter your name: ";
    getline (cin,name);

    cout <<"Enter your address: ";
    cin >> address;

    cout<< " Enter your phone number :"<< endl;
    cin>> phone_num;

    cout<< "Name :"<< name << endl << "address :" << address << endl << "Phone number :" << phone_num << endl;



}

