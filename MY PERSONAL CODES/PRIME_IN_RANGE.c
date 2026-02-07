#include<stdio.h>
int main(){
    int a,b,i,j,count=0;
    printf("enter first no:");
    scanf("%d",&a);
    printf("enter second no:");
    scanf("%d",&b);
    for(i=a;i<b;i++){
        for(j=2;j<=i;j++){
                if(i%j==0){
                printf("%d\n",j);
                }
        }
    }
}