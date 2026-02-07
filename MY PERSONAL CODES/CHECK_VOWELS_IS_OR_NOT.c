#include<stdio.h>
int main(){
    char name[100];
    int count=0;
    printf("enter a name:");
    gets(name);
    for(int i=0;i<=strlen(name);i++){
        if(name[i]=='a'||name[i]=='e'||name[i]=='i'||name[i]=='o'||name[i]=='u'||name[i]=='A'||name[i]=='E'||name[i]=='I'||name[i]=='O'||name[i]=='U'){
            count++;
            break;
        }
    }
        if(count==0){
            printf("STRING DOESNT CONTAIN ANY VOWELS:");
        }
        else{
            printf("STRING CONTAIN A VOWELS:");
        }

}