#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define FastIO ios_base::sync_with_stdio(false), cin.tie(0)
int main() {
    FastIO;
    int t;
    cin>>t;
    while(t--) {
        int hour;
        char colon;
        cin >> hour; // Read the hour part
        cin.ignore(numeric_limits<streamsize>::max(), ':'); // Ignore until colon
        int minutes;
        cin >> minutes;
        if(hour==0){
            if(minutes>9) {
                cout << "12:" << minutes << " AM" << endl;
            }
            else{
                cout<<"12:0"<<minutes<<" AM"<<endl;
            }
        }else if(hour==12){
            if(minutes>9) {
                cout << "12:" << minutes << " PM" << endl;
            }else {
                cout << "12:0" << minutes << " PM" << endl;
            }
        }
        else if(12>hour){
            if(hour>9) {
                if(minutes>9){
                    cout << hour << ":" << minutes << " AM" << endl;
                }
                else{
                    cout << hour << ":0" << minutes << " AM" << endl;
                }
            }else{
                if (minutes>9){
                    cout <<"0"<<hour << ":" << minutes << " AM" << endl;
                }
                else{
                    cout <<"0"<<hour << ":0" << minutes << " AM" << endl;
                }
            }

        }
        else if (hour > 12) {
            hour = hour -12 ;
            if(hour>9){
                if(minutes>9) {
                    cout << hour  << ":" << minutes << " PM" << endl;
                }else{
                    cout << hour  << ":0" << minutes << " PM" << endl;
                }
            }else{
                if(minutes>9){
                    cout<<"0"<< hour << ":" << minutes << " PM" << endl;
                }else{
                    cout<<"0"<< hour << ":0" << minutes << " PM" << endl;
                }
            }

        }
    }

    return 0;
}