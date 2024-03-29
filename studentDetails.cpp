//
// Created by HP on 26-Oct-22.
//
#include <iostream>
using namespace std;

#define MAX 10

class student
{
private:
    char  name[30];
    char semester[30];
    int   rollNo;
    int   total;
    float perc;
public:
    //member function to get student's details
    void getDetails(void);
    //member function to print student's details
    void putDetails(void);
};

//member function definition, outside of the class
void student::getDetails(void){
    cout << "Enter name: " ;
    cin >> name;
    cout <<"Semester: ";
    cin >> semester;
    cout << "Enter roll number: ";
    cin >> rollNo;

    cout << "Enter total marks outof 500: ";
    cin >> total;

    perc=(float)total/500*100;
}

//member function definition, outside of the class
void student::putDetails(void){
    cout << " Student details:\n";
    cout << " Name:"<< name <<endl;
    cout << " Semester:"<< semester <<endl;
    cout << " Roll Number:" << rollNo <<endl;
    cout << " Total:" << total <<endl;
    cout<< " Percentage: " << perc <<endl;
}

int main()
{
    student std[MAX];       //array of objects creation
    int n,loop;

    cout << "Enter total number of students: ";
    cin >> n;

    for(loop=0;loop< n; loop++){
        cout << "Enter details of student " << loop+1 << ":\n";
        std[loop].getDetails();
    }

    cout << endl;

    for(loop=0;loop< n; loop++){
        cout << "Details of student " << (loop+1) << ":\n";
        std[loop].putDetails();
    }

    return 0;
}
