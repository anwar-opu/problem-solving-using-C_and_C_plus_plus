#include <iostream>

using namespace std;
int main() {
    int data[10],i,j,num;

    cout<<"How many numbers? " << endl;
    cin>> num;
    for (i = 0; i < num; i++) {
        cin>>data[i];
    }
    int max = data[0];
    for ( j = 1; j < num ;j++){
        if (max<data[j])
            max = data[j];
    }
    cout<<"max value " << max;

    return 0;
}