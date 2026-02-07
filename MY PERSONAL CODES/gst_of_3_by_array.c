#include<stdio.h>
int main(){
    int marks[3];
    int i;
    printf("enter price of 3 item:");
    for(i=0;i<=2;i++){
        scanf("%d",&marks[i]);
    }
    float a=(marks[0])+(marks[1])+(marks[2]);
    float b=(0.18);
    float c=(a+a*b);
    printf("%f",c);

}