#include<stdio.h>
#include<string.h>
int main(){
    int len;
    char name[50];
    char name2[50];
    printf("ENTER YOUR NAME:");
    gets(name);
    len=strlen(name);
    for(int i=len;i>=0;i--){
        printf("%c",name[i]);
    }
}