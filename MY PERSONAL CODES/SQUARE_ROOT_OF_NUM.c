#include<stdio.h>
int main(){
    int a,b;
    float c;
    printf("ENTER A NUMBER:");
    scanf("%d",&a);
    c=0.5;
    b=pow(a,c);
    printf("SQUARE ROOT OF %d is %d",a,b);
}