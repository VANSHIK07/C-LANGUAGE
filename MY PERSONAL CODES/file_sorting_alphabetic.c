#include<stdio.h>
#include<string.h>
int main(){
    char name[100];
    printf("enter your name:");
    gets(name);
    int a=strlen(name);
    for(int i=0;i<=a-1;i++){
        for(int j=i+1;j<=a-1;j++){
            if(name[i]>name[j]){
                char temp=name[i];
                name[i]=name[j];
                name[j]=temp;

            }
        }
          
    }
    printf("%s",name);

}