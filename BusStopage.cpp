#include <iostream>

using namespace std;

int main() {
    int p=1, a, b, i,n,s=0,t,max=0;
    cin >> t;
    while(t--)
    {
        cin >> n;
        int a[n],b[n];
        for(i=1;i<n;i++)
        {
            cin >> a[i] >> b[i];
        }
        for(i=1;i<n;i++)
        {
            s+=a[i]-b[i];
            if(s>max)
                max=s;
        }
        cout << "Case " << p++ << ": " << max << endl;
        s=0;
        max=0;
    }
    return 0;
}
