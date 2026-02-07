#include<stdio.h>
int main(){
    FILE *f1ptr;
    f1ptr=fopen("v2.txt","r");
    int a,b;
    fscanf(f1ptr,"%d",&a);
    fscanf(f1ptr,"%d",&b);
    printf("FIRST NUMBER=%d",a);
    printf("\nSECOND NUMBER=%d",b);
    fclose(f1ptr);
    FILE *f2ptr;
    f2ptr=fopen("v2.txt","w");
    fprintf(f2ptr,"SUM=\n%d",a+b);
}