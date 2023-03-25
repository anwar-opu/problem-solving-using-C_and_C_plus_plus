#include<bits/stdc++.h>

using namespace std;

int main(){
    int rowN,colN;
    cin>>rowN>>colN;
    for(int i=1; i<=rowN; i++){
        if(i%2==1){
            for (int j = 0; j < colN; j++) {
                cout<<"#";
            }
            cout<<endl;
        }
        else if(i%4==0){
            cout<<"#";
            for (int j = 0; j < colN-1; j++) {
                cout << ".";
            }
            cout << endl;

        }
        else if(i%2==0){

            for (int j = 0; j < colN-1; j++) {
                cout << ".";
            }
            cout<<"#";
            cout << endl;
        }
    }


    return 0;
}