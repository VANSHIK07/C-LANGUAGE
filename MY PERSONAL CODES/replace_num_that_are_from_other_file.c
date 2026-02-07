#include<stdio.h>
int main(){
    FILE *fptr;
    fptr=fopen("v2.txt","r");
    int a,b;
    fscanf(fptr,"%d",&a);
    fscanf(fptr,"%d",&b);
    printf("FIRST NUMBER=%d",a);
    printf("\nSECOND NUMBER=%d",b);
    int temp=a;
    a=b;
    b=temp;
    printf("\nAFTER CHANGE:)");
    printf("\nFIRST NUMBER=%d\nSECOND NUMBER=%d",a,b);
}