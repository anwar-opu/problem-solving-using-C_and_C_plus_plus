#include<bits/stdc++.h>
using namespace std;

int main(){
    int a, b,c , n ,count=0;

    cin>>a>>b>>c;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin>>arr[i];
        if(b<arr[i] && arr[i]<c){
            count++;
        }
    }

    cout<<count;
}