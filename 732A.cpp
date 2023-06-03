#include<bits/stdc++.h>

using namespace std;
int main(){
    int a,b,count=0,i=1,sum = 0;
    cin>>a>>b;
    while(1) {
        sum = a * i ;
      if(sum%10==0){
          break;
      }
      else if(sum%10==b){
          break;
      }
      i++;
    }
    cout<<i;

    return 0;
}
