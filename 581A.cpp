#include<bits/stdc++.h>

using namespace std;
int main(){
    int blue, red,sub;
    cin>>blue>>red;
    if(blue>red){
        cout<<red<<" ";
        sub = blue - red;
        cout<<sub/2;
    }
    else if(red>blue){
        cout<<blue<<" ";
        sub = red - blue;
        cout<<sub/2;

    }
    else
        cout<<blue<<" "<<'0';
    return 0;
}

