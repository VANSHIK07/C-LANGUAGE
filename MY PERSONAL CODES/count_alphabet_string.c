#include<stdio.h>
int main(){
    char name[100];
    printf("ENTER NAME:");
    gets(name);
    int count=0;
    int i=0;
    while(name[i]!='\0'){
        count++;
        i++;
    }
    printf("NUMBER OF ALPHABET YOU HAD ENTERED IS %d",count);
    printf("%d",strlen(name));
}