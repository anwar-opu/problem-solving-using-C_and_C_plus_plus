#include <iostream>

using namespace std;
int main()
{
    string str;

    cin>>str;
    int x = str.length();
    int i=0,j=0;
    for(i=0;i<x;i=i+2)
    {
        for(j=i+2;j<x;j=j+2)
        {
            if(str[i]>str[j])
            {
                char temp=str[i];
                str[i]=str[j];
                str[j]=temp;
                temp = 0;
            }
        }
    }
    cout<<str;

}