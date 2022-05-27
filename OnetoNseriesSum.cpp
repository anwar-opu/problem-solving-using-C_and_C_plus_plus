#include<iostream>
using namespace std;

int main(){
    int n, sum=0, i;
    cout<<"Enter the last number :"<<endl;
    cin>>n;

    for ( i = 1; i <= n; i++) {
        sum += i;  // sum = sum + i
    }
    cout<<"sum= "<<sum<<endl;
}
