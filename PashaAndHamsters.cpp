#include<bits/stdc++.h>

using namespace std;
int main(){

    int n,b,c;

    cin >>n>>b>>c;

    int arr[n+2]={},firstPerson[b+1],secondPerson[c + 1];;

    for (int i = 0; i <b; i++) {
        cin>>firstPerson[i];
        arr[firstPerson[i]]=1;
    }


    for (int i = 0; i <c; i++) {
        cin >> secondPerson[i];
        if(arr[secondPerson[i]] == 0)
            arr[secondPerson[i]]=2;

    }

    for (int i = 1; i <= n; i++) {
        cout<<arr[i]<<" ";
    }

    return 0;
}