// B. ICPC Balloons
#include<bits/stdc++.h>
#define ll long long int
#define FastIO ios_base::sync_with_stdio(false), cin.tie(0)
using namespace std;
set<char> find_unique_characters(string str) {
    set<char> unique_chars;
    for (char c : str) {
        if (unique_chars.count(c) == 0) {
            unique_chars.insert(c);
        }
    }
    return unique_chars;
}

int main(){
    FastIO;
    ll t;
    cin>>t;
    while(t--) {
        string str;
        int n, doubleBalloon = 0, singleBalloon = 0, totalBalloon = 0;
        cin >> n >> str;
        set<char> unique_chars = find_unique_characters(str);

        doubleBalloon = unique_chars.size() * 2;
        singleBalloon = n - unique_chars.size();
        totalBalloon = doubleBalloon + singleBalloon;
        cout << totalBalloon << endl;
    }
    return 0;
}

