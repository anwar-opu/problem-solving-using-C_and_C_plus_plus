#include<bits/stdc++.h>
#define FastIO ios_base::sync_with_stdio(false), cin.tie(0)
using namespace std;
int main(){
    FastIO;
    int a = 0,b = 0 , c = 0 , team = 0;
    int n;
    cin>>n;

    int num;
    int arr1[5001];
    int  arr2[5001];
    int arr3[5001];



//    sort(v.begin(),v.end());
    for (int i = 1; i <= n; i++) {
        cin>>num;
        if(num == 1){
            arr1[a] = i;
            a++;
        }
        else if(num== 2){
            arr2[b] = i;
            b++;
        }
        else if (num ==3){
            arr3[c] = i;
            c++;
        }
    }
    team = min(a,min(b,c));
    cout<<team<<endl;
    for (int i = 0; i < team; i++) {
        cout<<arr1[i]<<" "<<arr2[i]<<" "<<arr3[i]<<endl;
    }

}