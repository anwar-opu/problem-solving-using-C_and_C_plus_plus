#include<stdio.h>

#define ll long long int

int main(){
    ll t;
    scanf("%ld", &t);
    while(t--) {
        ll n, o=0, l=0;

        scanf("%lld", &n);

        ll a[200000]={}, b[200003]={};

        for ( ll i = 0; i < n; i++) {
            scanf("%lld", &a[i]);
            b[a[i]]++;
        }

        for ( ll i = 0; i < n; i++) {
            if(b[a[i]]>1)
            {
                b[a[i]]--; //delete
                o++; //operation
                o+=l; // unique value stored
                l=0;
            }
            else
            {
                l++; // if unique value
            }

        }
        printf("%lld\n", o);

    }

}