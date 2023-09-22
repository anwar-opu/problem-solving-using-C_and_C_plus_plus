#include<bits/stdc++.h>
#define ll long long int
#define FastIO ios_base::sync_with_stdio(false), cin.tie(0)
using namespace std;
int main(){
    FastIO;
    int t;
    cin>>t;
    while(t--){
        int sum = 0;
        char a[11][11];
        int oneCount = 0,twoCount = 0,threeCount = 0,fourCount = 0, fiveCount = 0;
        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 10; j++) {
                cin>>a[i][j];
            }
        }
        for (int row = 0; row < 10; row++) {
            for (int col = 0; col < 10 ; col++) {
                if(row == 0 || row == 9 || col == 0 || col == 9){
                    if(a[row][col] == 'X'){
                        oneCount++;
                        a[row][col] = '.';
                    }
                }
                if(row == 1 || row == 8 || col == 1 || col == 8){
                    if(a[row][col] == 'X'){
                        twoCount++;
                        a[row][col] = '.';
                    }
                }
                if(row == 2 || row == 7 || col == 2 || col == 7){
                    if(a[row][col] == 'X'){
                        threeCount++;
                        a[row][col] = '.';
                    }
                }
                if(row == 3 || row == 6 || col == 3 || col == 6){
                    if(a[row][col] == 'X'){
                        fourCount++;
                        a[row][col] = '.';
                    }
                }
                if(row == 4 || row == 5 || col == 4 || col == 5){
                    if(a[row][col] == 'X'){
                        fiveCount++;
                        a[row][col] = '.';
                    }
                }
            }
        }
    //    cout<<oneCount<<endl;
    //    cout<<twoCount<<endl;
    //    cout<<threeCount<<endl;
    //    cout<<fourCount<<endl;
    //    cout<<fiveCount<<endl;
        sum = oneCount + twoCount * 2 + threeCount * 3 + fourCount * 4 + fiveCount * 5;
        cout<<sum<<endl;
    }
    return 0;
}
