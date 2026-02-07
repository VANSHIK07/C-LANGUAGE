#include<stdio.h>
#include<string.h>
int main(){
    int count=0;
    char name[100];
    char name2[100];
    printf("enter your name");
    gets(name);
    printf("enter your frnd name");
    gets(name2);
    int b = strlen(name);
    for(int i=1;i<=b;i++){
        if(name[i]==name2[i]){
            count++;
        }
    }
    if(count==b){
        printf("yes");
    }
    else{
        printf("no");
    }
}