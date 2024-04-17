#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define FastIO ios_base::sync_with_stdio(false), cin.tie(0)
int main() {
    FastIO;
    ll eye,mouth,body,result=0,tempMin=0;
    cin>>eye>>mouth>>body;

    tempMin = min(eye, mouth);
    tempMin = min(tempMin, body);

    if(eye > 0 && body > 0 && mouth >0) {

        if (body == tempMin) {
            result = result + body;
            mouth = mouth - tempMin;
            eye = eye - tempMin;
            body = body - tempMin;
        } else if (eye == tempMin) {
            result = result + eye;
            eye = eye - tempMin;
            body = body - tempMin;
            mouth = mouth - tempMin;
        } else if (mouth == tempMin) {
            result = result + mouth;
            mouth = mouth - tempMin;
            eye = eye - tempMin;
            body = body - tempMin;
        }
    }
    if(eye/2 >= body){
        result = result + body;
        eye = eye - (eye * 2);
        body = body - (eye/2);
    }else{
        result = result + (eye/2);
        eye = eye - (eye/2);
        body = body - (eye/2);
    }
    cout<<result<<endl;

}