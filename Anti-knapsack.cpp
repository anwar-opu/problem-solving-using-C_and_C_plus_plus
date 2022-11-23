#include<bits/stdc++.h>

using namespace std;
int main(){
    int t;
    int n,m,divi=0,j=0,count=0;
    int digit[1000];
    cin>>t;

    while(t--){
        cin>>n;
        cin>>m;

        divi = m/2;

        if(m%2 == 1){
            divi++;
        }

        for (int i =divi ; i <m ; i++) {
//            cout<<i<<" ";
            count++;
            digit[j]= i;
            j++;
        }


        for (int i = m+1; i <=n ; i++) {
           // cout<<i<<" ";
            count++;
            digit[j]= i;
            j++;
        }
        cout<<count<<endl;
        for (int k = 0; k <j; k++) {
            cout<<" "<<digit[k];
        }
        j=0;
        count=0;
        cout<<endl;
    }
    return 0;
}
