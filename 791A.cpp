#include<bits/stdc++.h>

using namespace std;
int main(){
    int limakWeighs, bobweighs;
    int year =0;
    cin>>limakWeighs>>bobweighs;
    while(limakWeighs <= bobweighs){
        limakWeighs = limakWeighs*3;
        bobweighs = bobweighs*2;
        year++;
    }
    cout<<year;
}
