#include<bits/stdc++.h>
#define ll long long int
#define FastIO ios_base::sync_with_stdio(false), cin.tie(0)
using namespace std;
int main(){
    FastIO;
    int t;
    cin>>t;
    while(t--){
        int r,c,max=0,RowMax=0,temp=0,position=0,HalfMax=0,Hcount=0;
        cin>>r>>c;
        string s[r];
        for(int i=0; i<r; i++){
                cin>>s[i];
        }   
        // for(int i=0; i<r; i++){
        //     for(int j=0; j<c; j++){
        //         cout<<s[i][j];
        //     }
        //     cout<<endl;
        // }
        for(int i=0; i<r; i++){
        temp = count(s[i].begin(), s[i].end(), '#');
        // cout<<temp<<endl;
        if(temp>max){
                max = temp;
                RowMax = i + 1; 
        }
        }
        // cout<<"max:"<<max<<endl;
        // cout<<"Row max:"<<RowMax<<endl;
        HalfMax = ceil(max / 2.00);
        // cout<<"half max:" << HalfMax<<endl;
        
        
        
        for (int j = 0; j<c ; j++){
            if(s[RowMax-1][j] == '#'){
                Hcount++;
                if(Hcount==HalfMax){
                    position = j+1;
                }
            }
        }
        // cout<<"position:"<<position<<endl;
        cout<<RowMax<<" "<<position<<endl;
    }

    return 0;
}