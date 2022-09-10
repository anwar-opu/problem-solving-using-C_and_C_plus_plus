#include<iostream>
using namespace std;
int main(){
    int n,i,max,mini,maxI=0, miniI=0, minimum;
    cin>>n;
    int a[n];
    for(i=0; i<n; i++){
        cin>>a[i];
    }
    max = a[0];
    mini = a[0];
    for (int j = 1 ; j < n; j++) {
        if(max < a[j]){
            max = a[j];
            maxI = j;
        }
        if(mini>=a[j]){
            mini = a[j];
            miniI = j;
        }

    }
    if(maxI > miniI)
    {
        cout<<((n-1)-miniI) + (maxI-1) << endl;
    }
    else cout<<((n-1)-miniI) +maxI << endl;


}

