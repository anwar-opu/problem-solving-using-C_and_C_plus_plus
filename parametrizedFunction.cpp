#include<iostream>

using namespace std;

class student {
    public :
        int id;
        float gpa;
        void display(){
            cout<< " ID " << id << " GPA " << gpa;
        }
        void setvalue(int x, float y){
            id = x;
            gpa = y;
        }

};

int main(){

     student opu;
     opu.setvalue(200110,3.56);
     opu.display();


     student rukon;
     rukon.setvalue(200113,3.95);
     rukon.display();





}
