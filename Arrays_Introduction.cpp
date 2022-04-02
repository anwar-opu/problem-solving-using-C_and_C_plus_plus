#include<iostream>
#define MAX 1000
using namespace std;

int main(){

    int a[MAX],n;

    cin>> n;                         //array size

    for (int i = 1; i <=n; i++) {   //array input
        cin>>a[i];
    }

    for (int i = 0; i < n; i++) {   //array output
        cout<<a[n-i]<<" ";
    }

}
