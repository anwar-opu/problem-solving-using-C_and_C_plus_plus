#include <iostream>

using namespace std;
int main(){
    int n,m=0;
    cin>>n;
    if (n%2==1){
        cout<<"-1";
    } else
        for (int i = 1 ; i <= n; i++) {
            m=i;
            cout<<" "<<m+1;

            cout<< " "<<i;
            i++;
        }
}