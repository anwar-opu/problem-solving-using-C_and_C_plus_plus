#include<iostream>
#include<cstdlib>

using namespace std;
int main (){

    int guessNumber, randomNumber;

    while(1){

        cout<<"Enter your guess between 1 to 5 : "<< endl;
        cin>> guessNumber;

        randomNumber = 1 + rand() % 5;

        if (guessNumber == randomNumber){
            cout<< " you have won "<< endl;
            cout<< " Random number = " <<  randomNumber << endl<< endl;

        } else{
            cout<< " you have lost...try again " << endl;
            cout<< " Random number = " <<  randomNumber << endl<<endl;
        }


    }



}
