#include<stdio.h>
int main(){
    FILE *fptr;
    fptr=fopen("VAN.R","r");
    char ch;
    ch=getchar();
    while(ch!='$'){
        putc(ch,fptr);
        ch=getchar();
    }
}