#include<stdio.h>
int main(){
    int n;
    printf("ENTER NUMBER OF ELEMENTS OF ARRAY U WANT TO ENTER:");
    scanf("%d",&n);
    int arr[n];
    printf("ENTER YOUR ARRAY:");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("ENTER THE NUMBER YOU WANT TO CHECK:");
    int a,count=0;
    scanf("%d",&a);
    for(int i=0;i<n;i++){
        if(arr[i]==a){
            count++;
        }
    }
    printf("THE NUMBER %d IS REPEATED %d TIMES:)",a,count);

}