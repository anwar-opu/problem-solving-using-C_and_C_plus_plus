#include<iostream>

using namespace std;

int main (){
    int mark;

    cout<<"Enter Mark:"<< endl;
    cin >> mark;

    if (mark > 64){
        if(mark >= 97){
            cout<<"A+ and grade 4.00"<< endl;
        }else if(mark >= 93){
            cout<<"A and grade 4.00"<< endl;
        }else if(mark >= 90){
            cout<<"A- and grade 3.7"<< endl;
        }else if(mark >= 87){
            cout<<"B+ and grade 3.3"<< endl;
        }else if(mark >= 83){
            cout<<"B and grade 3.0"<< endl;
        }else if(mark >= 80){
            cout<<"B- and grade 2.7"<< endl;
        }else if(mark >= 77){
            cout<<"C+ and grade 2.3"<< endl;
        }else if(mark >= 73){
            cout<<"C and grade 2.0"<< endl;
        }else if(mark >= 70){
            cout<<"C- and grade 1.7"<< endl;
        }else if(mark >= 67){
            cout<<"D+ and grade 1.3"<< endl;
        }else if(mark >= 65){
            cout<<"D and grade 1.0"<< endl;
        }

    }else {
        cout<<"E/F\tBelow 65\t0.0"<<endl;
    }


}
