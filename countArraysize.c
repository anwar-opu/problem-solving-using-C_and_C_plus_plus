#include<stdio.h>
#define SIZE(a) (sizeof(a)/sizeof (a[0])) // int size 4
int main(){
    int a[]={20,34,  10,23,56,67,89,45,34,55,90};

    int b[]={56,34,78,32,56,78,3,4,5,6};



    printf("Size of array b %d \n", sizeof(a)/sizeof(a[0]));

}
