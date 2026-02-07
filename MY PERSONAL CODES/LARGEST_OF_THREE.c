#include<stdio.h>
int main(){
    int a,b,c;
    printf("ENTER THREE NUMBER:");
    scanf("%d %d %d",&a,&b,&c);
    ((a>b)?((a>c)?printf("%d NUMBER IS LARGEST",a):printf("%d NUMBER IS LARGEST",c)):((b>c)?printf("%d NUMBER IS LARGEST",b):printf("%d NUMBER IS LARGEST",c)));


}