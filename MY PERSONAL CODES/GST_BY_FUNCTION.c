#include<stdio.h>
void van(float r){
    r=r+(0.18*r);
    printf("%f",r);
}
int main(){
    int a=100;
    van(a);
    printf("%d",a);
}