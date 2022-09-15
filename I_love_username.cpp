#include <iostream>
using namespace std;
int main(){
    int n,count=0;
    cin>>n;
    int number[n];
    for (int i = 0; i < n; i++) {
        cin>>number[i];
    }
    int max = number[0];
    int mini = number[0];

    for (int i = 0; i < n; i++) {
        if(number[i]>max){
            max = number[i];
            count++;
        }
        if(number[i]<mini){
            mini = number[i];
            count++;
        }
    }
    cout<<count;
}
