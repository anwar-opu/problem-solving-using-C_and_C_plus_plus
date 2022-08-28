#include <iostream>

using namespace std;

int main()
{
    long long int n,k,i,max, min, size,s=1,j=1;
    cin >> n;

    while(n--)
    {
        cin>>size;
        long long int a[size];
        for(i=0; i<size; i++)
            cin>>a[i];
        max = a[0];
        min = a[0];
        for(i=1; i<size; i++)
        {

            if(a[i] > max)
                max = a[i];

            if(a[i] < min)
                min = a[i];
        }
        s=max*min;
        cout << "Case " << j++ << ": " << s << endl;
        s=1;
    }

    return 0;
}
