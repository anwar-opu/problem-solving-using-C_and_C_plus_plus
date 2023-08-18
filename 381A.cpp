#include<bits/stdc++.h>
#define FastIO ios_base::sync_with_stdio(false), cin.tie(0)
using namespace std;
int main(){
    FastIO;
    int n;
    cin>>n;
    int arr[n],Sereja=0,Dima=0,l=0,r=0;
    for (int i = 0; i <n; i++) {
        cin>>arr[i];
    }
    r = n-1;
    int i=0;
    while(l<=r){
        if(i%2==0){
            if(arr[l]<arr[r]){
                Sereja = Sereja + arr[r];
                r--;
            }else {
                Sereja = Sereja + arr[l];
                l++;
            }
        }
        if(i%2==1){
            if(arr[l]<arr[r]){
                Dima = Dima + arr[r];
                r--;
            }else {
                Dima = Dima + arr[l];
                l++;
            }
        }
        i++;
    }
    cout<<Sereja<<" "<<Dima<<endl;
}