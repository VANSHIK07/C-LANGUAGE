#include<stdio.h>
int main(){
    FILE *fptr;
    fptr=fopen("VAN.R","r");
    int num;
    fscanf(fptr,"%d",&num);
    printf("%d",num);
    fscanf(fptr,"%d",&num);
    printf("\n%d",num);
    
    


    fclose(fptr);
}