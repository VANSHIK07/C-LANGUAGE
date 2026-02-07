#include<stdio.h>
int main(){
    int a,i,count=0;
    printf("ENTER ANY NUMBER:");
    scanf("%d",&a);
    for(i=2;i<a;i++){
        if(a%i==0){
            count++;
            break;
        }
    }
    if(count==0){
        printf("PRIME NUMBER");
    }
    else{
        printf("NOT A PRIME NUMBER");
    }
}