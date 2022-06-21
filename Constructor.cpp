#include<iostream>
using namespace std;

class student {
public :
    int id;
    float gpa;

    void display() {
        cout << "ID " << id << "  GPA " << gpa;
    }

    student (int x , float y){
        id = x;
        gpa = y;
    }
};


int main (){

    student opu(200110,8.90);
    opu.display();

    student alim (200112, 5.98);
    alim.display();



}