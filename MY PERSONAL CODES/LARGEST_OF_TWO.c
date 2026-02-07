#include<stdio.h>
int main(){
    int a,b,c;
    printf("ENTER FIRST NUMBER:");
    scanf("%d",&a);
    printf("ENTER SECOND NUMBER:");
    scanf("%d",&b);
    if((a>b)?printf("%d  IS GREATER THAN %d",a,b):printf("%d IS GREATER THAN %d",b,a));
}