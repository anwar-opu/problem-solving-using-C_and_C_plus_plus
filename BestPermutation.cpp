#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int t;
    cin>>t;

    while (t--){
        cin>>n;
        int  arr[n+1];

        for (int i = 1, value = n-2; i <= n-2 ; i++,value--) {
            arr[i] = value ;
        }
        arr[n-1] = n-1 ;
        arr[n] = n;

        if(n%2==1){
            swap(arr[1],arr[2]);
        }
        for (int i = 1 ; i <= n;  i++) {
            cout<<arr[i]<<" ";
        }
        cout<<endl;


    }
    return 0;
}