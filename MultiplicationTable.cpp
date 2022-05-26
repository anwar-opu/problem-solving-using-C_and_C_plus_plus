#include<iostream>

using namespace std;

int main(){
    int num;

    cout<< "Enter any number:"<<endl;
    cin>>num;

    for (int i = num; i <=num ; i++) {
        for (int j = 1; j <=10; j++) {
            cout<< i << "*" << j << "= "<< i*j << endl;
        }

    }



}




