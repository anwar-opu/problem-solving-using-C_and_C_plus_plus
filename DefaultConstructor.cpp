#include<iostream>
using namespace std;
class student {
    public:
        int id;
        float gpa;

    void display(){
        cout<<" ID : "<< id << " GPA " << gpa << endl;
    }
    student(int x, float y){                        // Constructor
        id = x;
        gpa = y;

    }

    student (){                                     //default Constructor
        cout<<"default Constructor " << endl;

    }



};
int main(){

    student opu(200110, 3.67);
    opu.display();

    student shakil;                                 //call default Constructor


}