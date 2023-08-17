#include<bits/stdc++.h>
#define FastIO ios_base::sync_with_stdio(false), cin.tie(0)
using namespace std;
int main(){
    FastIO;
    long long int t;
    cin>>t;
    while(t--) {
        long long int a, b, c, temp = 0;
        cin >> a >> b >> c;
        if(c%2==0) {
            temp = c/2;
            a = a + temp;
//            cout << temp << endl;
            c =  c - temp;
            b = b + c;
//            cout<<"a "<<a<<endl;
//            cout<<"b "<<b<<endl;
            if(b<a){
                cout<<"First"<<endl;
            }
            else
                cout<<"Second"<<endl;
        }else{
            temp = (c / 2)+1 ;
//            cout << temp << endl;
            a = a + temp;
            c =  c - temp;
            b = b + c ;
//            cout<<"a "<<a<<endl;
//            cout<<"b "<<b<<endl;
            if(b<a){
                cout<<"First"<<endl;
            }
            else
                cout<<"Second"<<endl;
        }


    }
    return 0;

}