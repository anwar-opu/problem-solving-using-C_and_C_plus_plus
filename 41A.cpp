#include <bits/stdc++.h>
using namespace std;


void reverseStr(string& str1)
{
    int n = str1.length();

    // Swap character starting from two
    // corners
    for (int i = 0; i < n / 2; i++)
        swap(str1[i], str1[n - i - 1]);
}

// Driver program
int main()
{
    string str1,str2 ;

    cin>>str1;
    cin>>str2;
    reverseStr(str1);
    if(str1==str2){
        cout<<"YES";
    }
    else
        cout<<"NO";

    return 0;
}

