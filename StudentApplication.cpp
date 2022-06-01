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
        cout<<"marks for student  "<<i+1<<endl;
        cin>> marks[i];
    }
    //sum of marks:
    for (int i = 0; i < studentnum; ++i) {
        sum = sum + marks[i];
    }

    average = (float)sum / studentnum;

    // maximum & minimum
    int max = marks[0];
    int min = marks[0];
    for (int i = 1; i < studentnum; i++) {
        //maximum
        if (max <marks[i]){
            max = marks[i];
        }
        //minimum
        if (min>marks[i]) {
            min = marks[i];
        }
    }

    cout << "total marks  = "<< sum<<endl;
    cout<< "average " << average << endl;
    cout<<"maximum marks "<< max << endl;
    cout<<"minimum marks "<< min << endl;


}

