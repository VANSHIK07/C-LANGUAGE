#include<stdio.h>
int fib(int n){
    if(n==1){
        return 1;
    }
    if(n==0){
        return 0;
    }

    int fibNm1=fib(n-1);
    int fibNm2=fib(n-2);
    int fibN=fibNm2+fibNm1;
    return fibN;
}
int main(){
    int a;
    printf("enter n:");
    scanf("%d",&a);
    printf("fib of %d is %d",a,fib(a));

}