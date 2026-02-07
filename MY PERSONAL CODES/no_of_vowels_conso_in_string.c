#include<stdio.h>
int main(){
    char name[100];
    int count=0;
    printf("ENTER YOUR NAME:");
    gets(name);
    int a=strlen(name);
    for(int i=0;i<a;i++){
        if(name[i]=='a'||name[i]=='e'||name[i]=='i'||name[i]=='o'||name[i]=='u'||
        name[i]=='A'||name[i]=='E'||name[i]=='I'||name[i]=='O'||name[i]=='U'){
            count++;
        }
    }
    printf("YOUR NAME HAS %d VOWELS:",count);
    printf("\nYOUR NAME HAS %d CONSONENTS:",a-count);
}