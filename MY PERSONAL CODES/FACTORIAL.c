#include<stdio.h>
int main(){
    int a,i,fac=1;
    printf("ENTER NUMBER:");
    scanf("%d",&a);
    for(i=1;i<=a;++i){
        fac=fac*i;
    }
    printf("FACTORIAL OF %d NUMBER IS %d",a,fac);
}