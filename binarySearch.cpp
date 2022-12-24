#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,arr[100],item, lb, ub, beg, end, mid;

    cout<<"Element size:";
    cin>>n;
    lb= 1 , ub = n;

    for (int i = 1 ; i <= n; i++) {
        cin>>arr[i];
    }
//    sort(arr,arr + n);
    cout<<"Enter the item you want search :";
    cin>>item;

    beg = lb, end = ub , mid = ((beg+end)/2) ;

    while( (arr[mid] != item)  &&  (beg<=end) ){

        if( item>arr[mid]){
            beg = mid + 1 ;
            mid = ((beg+end)/2);

        } else if ( item<arr[mid] ){
            end = mid - 1 ;
            mid = ((beg+end)/2);
        }

    }
    if(arr[mid]==item){
        cout<<"item found & it's location "<< mid;
    }
    else {
        cout<<"item not found";
    }
    return 0;

}
//#include<stdio.h>
//
//int main()
//{
//    int DATA[100], N, i, LB, UB, BEG, END, ITEM, MID;
//    printf("Enter the number of elements in array: ");
//    scanf("%d", &N);
//
//    LB=1, UB=N;
//    //***YOUR ENTERED ELEMENTS MUST BE SORTED***
//
//    for(i=1; i<=N; i++)
//    {
//        printf("Enter element no %d: ", i);
//        scanf("%d", &DATA[i]);
//    }
//
//    BEG=LB, END=UB, MID=((BEG+END)/2);
//    printf("\nEnter the ITEM you want to search: ");
//    scanf("%d", &ITEM);
//
//    while((BEG<=END) && (DATA[MID]!=ITEM))
//    {
//        if(ITEM<DATA[MID]) END=MID-1;
//        else BEG=MID+1;
//        MID=((BEG+END)/2);
//    }
//
//    if(DATA[MID]==ITEM)
//    {
//        int LOC=MID;
//        printf("ITEM %d found at LOC: %d\n", ITEM, LOC);
//    }
//    else
//    {
//        int LOC=0;
//        printf("ITEM %d not found! So LOC: %d\n", ITEM, LOC);
//    }
//    return 0;
//}