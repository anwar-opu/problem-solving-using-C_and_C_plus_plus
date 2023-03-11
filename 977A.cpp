#include<bits/stdc++.h>
using namespace std;

void display(int n){
    cout<<n<<endl;
}

int main()
{
    int n ,t;
    cin>> n >> t;

    for (int i = 0; i < t; i++) {
        if (n%10==0) {
            n = n / 10;
        }
        else
            n = n -1;
    }

    display(n);
    return 0;
}
