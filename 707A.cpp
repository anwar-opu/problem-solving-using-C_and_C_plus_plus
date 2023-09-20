#include<bits/stdc++.h>
#define ll long long int
#define FastIO ios_base::sync_with_stdio(false), cin.tie(0)
using namespace std;
int main(){
    FastIO;
    ll n,m,WhiteAndBlack=0, otherColour = 0;
    cin>>n>>m;
    char colour[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; ++j) {
            cin>>colour[i][j];
        }
    }
//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j < m; ++j) {
//            cout<<colour[i][j];
//        }
//        cout<<endl;
//    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if(colour[i][j]== 'C' || colour[i][j] == 'M' || colour[i][j] == 'Y'){
                otherColour++;
                cout<<"#Color"<<endl;
                break;
            }
            else {
                WhiteAndBlack++;
            }
        }
        if(otherColour==1){
            break;
        }
    }
    if(n*m == WhiteAndBlack ){
        cout<<"#Black&White"<<endl;
    }
    return 0;
}