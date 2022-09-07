#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int a[100];
    float division,sum=0;
    int n;
    cin>>n;
    for (int i = 0; i < n; i++) {
        cin>>a[i];

    }
    for (int i = 0; i < n; i++) {
        sum = sum + a[i];
    }
   division = sum / n;

    cout<<" "<<fixed<<setprecision(12)<<division;
}