#include<iostream>
#include<iomanip>
using namespace std;
class student{
    public:
        int id;
        float gpa;
        void display (){
            cout <<"ID "<< id <<"  "<<"GPA "<<setprecision(2)<< fixed << gpa << endl;
        }
};


int main (){

    student anwar;
    anwar.id=200110;
    anwar.gpa=3.50;
    anwar.display();

    student alim;
    alim.id=200111;
    alim.gpa= 4.00;
    alim.display();

    student hasan;
    hasan.gpa = 2.00;
    hasan.id = 200112;
    hasan.display();

    student foysal;
    foysal.gpa = 2.00;
    foysal.id = 200094;
    foysal.display();
}

