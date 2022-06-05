#include <iostream>
using namespace std;
class student {
    public:
        int id;
        double gpa;
};


int main (){
    student anwar, rukon, shakil , tanvir ;
    anwar.id = 200110;
    anwar.gpa = 3.91;

    cout << "anwar  "<< anwar.id << "  " << anwar.gpa <<endl;

    rukon.id = 200113 ;
    rukon.gpa = 3.70 ;

    cout<< "rukon "<< rukon.id << "  "<< rukon.gpa << endl;

    shakil.id = 200192;
    shakil.gpa = 3.50 ;

    cout <<"shakil "<< shakil.id << "  "<< shakil.gpa << endl;

    tanvir.id = 200094 ;
    tanvir.gpa = 3.55 ;

    cout << "tanvir " << tanvir.id << "  " << tanvir.gpa <<endl;



}

