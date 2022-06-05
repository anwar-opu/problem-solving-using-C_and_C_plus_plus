#include <iostream>
using namespace std;

void displayarray(int num[], int arraySize){
    for (int i = 0; i < arraySize ; i++) {
        cout << num [i] << " " ;
    }

}

int main (){
    int number [5] = {10, 20 , 30, 40, 50 };

    displayarray(number, 5);

}

