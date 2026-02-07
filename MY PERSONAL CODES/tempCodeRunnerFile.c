#include<stdio.h>
int main(){
    int *ptr;
    ptr=(int *)calloc(2,sizeof(int));
    ptr[0]=2;
    ptr[1]=4;
    for(int i=0;i<2;i++){
        printf("\n%d",ptr[i]);
    }
    ptr=realloc(ptr,3);
    ptr[0]=1;
    ptr[1]=3;
    ptr[2]=5;
    for(int i=0;i<3;i++){
        printf("\n%d",ptr[i]);
    }
}