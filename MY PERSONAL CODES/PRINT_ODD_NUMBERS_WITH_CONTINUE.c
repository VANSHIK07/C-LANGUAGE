#include<stdio.h>
int main(){
    int a,i;
    for(i=5;i<=10;++i){
        if(i%2==0){
            continue;
        }
        printf("%d",i);
    }
}