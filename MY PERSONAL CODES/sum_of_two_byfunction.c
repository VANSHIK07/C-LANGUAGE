#include<stdio.h>
int van(int a,int b){
    return a + b;
}
int main(){
    int a,b,s;
    printf("ENTER frst NUMBERS:");
    scanf("%d",&a);
    printf("ENTER frst NUMBERS:");
    scanf("%d",&b);
    s=van(a,b);
    printf("%d",s);
    return 0;
}