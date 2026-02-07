#include<stdio.h>
int main(){
    int arr[4];
    printf("ENTER YOUR ARRAY:");
    for(int i=0;i<=3;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<2;i++){
        int first=arr[i];
        int second=arr[4-i-1];
        arr[i]=second;
        arr[4-i-1]=first;
    } 
    for(int i=0;i<=3;i++){
        printf("\t%d",arr[i]);
    }
}