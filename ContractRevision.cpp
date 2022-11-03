#include <algorithm>
#include <iostream>
using namespace std;


string removeCharacters(string S, char C)
{

    S.erase(remove(
                    S.begin(), S.end(), C),
            S.end());

    return S;
}

int main()
{

    int h,st,p,i;
    char C ;
    string S ;

    while(1)
    {
        int f=0;
        cin >> C >> S;
        if( C=='0' && S[0]=='0')break;

        S = removeCharacters(S, C);
        int ss=S.size();
        for(int i=0;i<ss;i++)
        {
            if(S[i]=='0')f++;

        }
        for(i=0;i<ss;i++)
        {
            if (S[i]!='0')
            {
                st=i;
                break;
            }

        }
        if(S[0]==0)
            cout << 0 << endl;
        else if(f==ss)
            cout << 0 << endl;
        else
        {
            for(p=st;p<ss;p++)
                cout << S[p];
            cout << endl;
        }

    }

    return 0;
}