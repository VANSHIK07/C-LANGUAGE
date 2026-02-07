#include<stdio.h>
int main(){
    char name[100];
    printf("ENTER YOUR NAME:");
    gets(name);
    char a;
    printf("ENTER THE CHARACTER U WANT TO CHECK:)");
    scanf(" %c",&a);
    int b=strlen(name);
    int count=0;
    for(int i=0;i<b;i++){
        if(name[i]==a){
            count++;
            break;
        }
    }
    if(count==0){
        printf("GIVEN CHARACTER IS NOT PRESENT");
    }
    else{
    printf("GIVEN CHARACTER IS NOT PRESENT");
    }
}