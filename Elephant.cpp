#include<iostream>
using namespace std;
int main(){
    long long int item,step;
    cin>>item;

    if(item%5==0) {
        step = item / 5;
    }
    else step = (item /5)+1;
    cout<<step;

    return 0;
}