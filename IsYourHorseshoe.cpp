#include<iostream>
#include<bits/stdc++.h>


using namespace std;

int main() {
    long long int n1,n2,n3,n4,count=0;
    cin>>n1>>n2>>n3>>n4;

    if (n1 == n2 || n1 == n3 || n1 == n4) {
            count++;
    }
    if (n2 == n3 || n2 == n4) {
        count++;
    }
    if (n3 == n4) {
        count++;
    }
    cout << count;
}