#include<iostream>
#include<conio.h>
using namespace std;

int main (){
    char ch;

    cout<<"Enter any letter :"<< endl;
    cin>>ch;

    switch (ch) {

        case 'a':
            cout<<"vowel"<<endl;
            break;
        case 'e':
            cout<<"vowel"<<endl;
            break;
        case 'i':
            cout<<"vowel"<<endl;
            break;
        case 'o':
            cout<<"vowel"<<endl;
            break;
        case 'u':
            cout<<"vowel"<<endl;
            break;
        case 'A':
            cout<<"vowel"<<endl;
            break;
        case 'E':
            cout<<"vowel"<<endl;
            break;
        case 'I':
            cout<<"vowel"<<endl;
            break;
        case 'O':
            cout<<" vowel "<<endl;
            break;
        case 'U':
            cout<<"vowel"<<endl;
            break;
        default:
            cout<<"consonant"<<endl;
    }
    getch();
}