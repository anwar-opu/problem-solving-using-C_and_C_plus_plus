#include<bits/stdc++.h>

using namespace std;
int main(){
    string s1,s2,s3,s4;
    char ch='a';
    int t,n;
    cin>>t;
    while(t--){

        cin>>s1;
        n = s1.length();

        s1.insert(0,1,ch);
        s2=s1;

        reverse(s2.begin(),s2.end());
//        cout<<s1<<"=s1"<<endl;
//        cout<<s2<<"=s2="<<endl;

        if (s1!=s2){
            cout<<"YES"<<endl;
            cout<<s1<<endl;
        }
        else {
            s1.erase(s1.begin());
            s1.insert(n, 1, ch);
            s2=s1;
            reverse(s2.begin(),s2.end());
            if (s1!=s2){
                cout<<"YES"<<endl;
                cout<<s1<<endl;
            }
            else {
                cout<<"NO"<<endl;
            }
        }
    }

    return 0;
}