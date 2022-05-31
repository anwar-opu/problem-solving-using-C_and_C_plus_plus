#include<iostream>
using namespace std;

int main(){
    int studentnum, sum = 0;
    float average;
    int marks[10];

    //student :
    cout<< " Number of student :"<< endl;
    cin>> studentnum;

    //array input:
    for (int i = 0; i < studentnum; i++ ) {
        cin>> marks[i];
    }
    //sum of marks:
    for (int i = 0; i < studentnum; ++i) {
        sum = sum + marks[i];
    }
    cout << "total marks  = "<< sum<<endl;
    average = (float)sum / studentnum;
    cout<< "average " << average << endl;

}

