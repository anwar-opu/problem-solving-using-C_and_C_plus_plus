#include<iostream>

using namespace std;

int main(){
    int i, m, sum=0;

    cout<<"Enter the last number : "<< endl;
    cin>>m;

    for ( i = 0; i <= m ; i++) {
        if (i%2==0){
        sum +=  i;
        }
        else
            continue;
    }
    cout<<"Sum of Even Number :"<< sum;
}