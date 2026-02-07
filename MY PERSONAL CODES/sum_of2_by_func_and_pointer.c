#include<stdio.h>
void van(int a,int b,int *sum){
    *sum=a+b;
}
int main(){
    int a=3;
    int b=5;
    int sum;
    van(a,b,&sum);
    printf("%d",sum);
}