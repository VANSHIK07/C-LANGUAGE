#include<stdio.h>
int main(){
    int a,b,sum=0;
    printf("ENTER A NUMBER:");
    scanf("%d",&a);
    while(a>0){
        b=a%10;
        sum=sum+b;
        a/=10;
    }
    printf("SUM OF DIGITS IS %d",sum);
}