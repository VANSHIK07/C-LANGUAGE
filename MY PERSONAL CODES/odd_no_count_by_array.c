#include<stdio.h>
int main(){
    int arr[10];
    int count=0;
    printf("ENTER 10 NUMBERS:");
    for(int i=0;i<=9;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<=9;i++){
        if(arr[i]%2!=0){
            count++;
    }
  
}
  printf(" odd =%d",count);
}