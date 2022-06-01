#include<iostream>
using namespace std;

int main () {

    int row, col;
    int str[5][5];
    cout<<"Enter row number :"<<endl;
    cin>> row;
    cout<<"Enter column number :"<<endl;
    cin>> col;
    cout<<endl;

    //input 2D array
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col ; j++) {
            cout<<"A["<<i<<"]["<<j<<"] =";
            cin>>str[i][j];
        }
        cout<<endl;
    }

    //output 2D array
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col ; j++) {
            cout<<str[i][j]<<"  ";
        }
        cout<<endl;
    }
}


