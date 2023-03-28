#include<bits/stdc++.h>

using namespace std;
int main(){
    int problemSet,returnHome,temp = 0,extra = 0, count=0;
    cin>>problemSet>>returnHome;
    extra = 240 - returnHome ;

    for (int i = 1; i <= problemSet; i++) {

        temp = extra - 5*i ;
        if(temp<0){
            break;
        }
        extra = temp;
        count++;

    }
    cout<<count<<endl;
    return 0;
}