#include<stdio.h>
int main(){
    printf("ENTER NUMBER OF ELEMENTS OF ARRAY:");
    int a;
    scanf("%d",&a);
    int arr[a];
    printf("ENTER YOUR ARRAY:");
    for(int i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    int max;
    max=arr[a-1];
    for(int i=0;i<a;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    printf("LARGEST NUMBER IN ARRAY IS %d",max);

}