#include<bits/stdc++.h>
#define ll long long int
#define FastIO ios_base::sync_with_stdio(false), cin.tie(0)
using namespace std;
int main(){
    FastIO;
    ll t;
    cin>>t;
    while(t--) {
        vector<int> team1;
        vector<int> team2;
        int maxTeam1 = 0, maxTeam2 = 0, minTeam1 = 0, minTeam2 = 0;
        for (int i = 0; i < 2; i++) {
            int x;
            cin >> x;
            team1.push_back(x);
        }
        for (int i = 0; i < 2; i++) {
            int x;
            cin >> x;
            team2.push_back(x);
        }
        maxTeam1 = *max_element(team1.begin(), team1.end());
        minTeam1 = *min_element(team1.begin(), team1.end());
        maxTeam2 = *max_element(team2.begin(), team2.end());
        minTeam2 = *min_element(team2.begin(), team2.end());
        if (maxTeam1 > minTeam2 && maxTeam2 > minTeam1) {
            cout << "YES" << endl;
        } else
            cout << "NO" << endl;
    }
    return 0;
}
