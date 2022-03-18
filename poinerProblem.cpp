#include<iostream>

using namespace std;

void update(int &a,int &b) {
    int olda = a;
    a = a + b;
    if (olda>b){
        b = olda - b;
    }
    else{
        b= b - olda;
    }
}

int main() {
    int a, b;

    cin >> a;
    cin >> b;
    update(a, b);
    cout<<a<<endl<<b;

    return 0;
}