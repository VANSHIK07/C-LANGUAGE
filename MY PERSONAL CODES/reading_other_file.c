#include<stdio.h>
int main(){
    FILE *fptr;
    fptr=fopen("v.txt","r");
    char ch;
    fscanf(fptr,"%c",&ch);
    printf("%c",ch);
}