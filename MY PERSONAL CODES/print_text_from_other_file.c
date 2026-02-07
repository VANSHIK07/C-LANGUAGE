#include<stdio.h>
int main(){
    FILE *fptr;
    fptr=fopen("vanshik.txt","r");
    int ch=fgetc(fptr);
    while(ch!=EOF){
        printf("%c",ch);
        ch=fgetc(fptr);
    }
    fclose(fptr);
}