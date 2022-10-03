#include <iostream>

using namespace std;
int main(){
    long long int t,n,k,maximum,sum=0;
    int b[100];
    cin>>t;

    while (t--){
        cin>>n>>k;

        long long int  a[n];

        for (int i = 0; i < n; i++) {
            cin>>a[i];
            b[i] = i % k;
        }
//        for (int i = 0; i < n; i++) {
//           b[i] = i % k;
//        }
//        for (int i = 0; i < n; i++) {
//            cout<<b[i];
//        }
        for (int i = 0; i < k; i++) {
            maximum = a[i];
            for (int j = 0; j < n; j++) {

                if(b[i]==(j%k)){

                    if(a[j]>maximum){
                        maximum = a[j];
                    }

                }
            }
            sum = sum + maximum;
        }
        cout<<sum<<endl;
        sum=0;
    }
    return 0;
}