#include<stdio.h>
int main(){
    int a;
    printf("ENTER A NUMBER:");
    scanf("%d",&a)
    printf("%d",fib(a));
}
int fib(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    return fib(n-1)+fib(n-2);
}