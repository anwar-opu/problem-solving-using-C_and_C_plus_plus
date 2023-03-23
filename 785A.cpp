#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<string> v_s;
    int n,sum = 0;
    cin>>n;
    for (int i = 0; i < n; i++) {
        string  x;
        cin>>x;
        v_s.push_back(x);
    }
    for (int i = 0; i < n; i++) {
        if(v_s[i] == "Tetrahedron"){
            sum = sum + 4;
        }
        else if(v_s[i] == "Cube"){
            sum = sum + 6;
        }
        else if(v_s[i] == "Octahedron"){
            sum = sum + 8;
        }
        else if(v_s[i] == "Dodecahedron"){
            sum = sum + 12;
        }
        else if(v_s[i] == "Icosahedron"){
            sum = sum + 20;
        }

    }
    cout<<sum<<endl;

    return 0;
}
