#include <bits/stdc++.h>
using namespace std;

/*Returns true if s1 is subsequence of s2*/
bool issubsequence(string& s1, string& s2)
{
    int n = s1.length(), m = s2.length();
    int i = 0, j = 0;
    while (i < n && j < m) {
        if (s1[i] == s2[j])
            i++;
        j++;
    }
    /*If i reaches end of s1,that mean we found all
    characters of s1 in s2,
    so s1 is subsequence of s2, else not*/
    return i == n;
}
int main()

{
    string s1 = "heidi";
    string s2 ;
    cin>>s2;
    if (issubsequence(s1, s2))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}

