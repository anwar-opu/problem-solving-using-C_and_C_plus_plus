#include<stdio.h>
int main(){
    int a,b,c,x,y,z,i;
    scanf("%d %d %d", &a, &b, &c);

     i = a + b * c;
     x = a * (b + c);
     y = a * b * c;
     z = ( a + b ) * c;

     if(x<i && y < i && z < i){
         printf("%d", i);
     }
     else if(i < x && y < x && z < x){
         printf("%d", x);
     } else if( i < y && x < y && z < y){
         printf("%d", y);
     }
     else if(i<z && x<z && y< z){
         printf("%d", z);
     }
}