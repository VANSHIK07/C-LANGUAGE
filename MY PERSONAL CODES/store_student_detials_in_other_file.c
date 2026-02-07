#include<stdio.h>
int main(){
    FILE *fptr;
    fptr=fopen("vanshik.txt","w");
    int age;
    float cgpa;
    char name[100];
    printf("ENTER YOUR NAME:");
    scanf("%s",&name);
    printf("ENTER YOUR AGE:");
    scanf("%d",&age);
    printf("ENTER YOUR CGPA:");
    scanf("%f",&cgpa);
    fprintf(fptr,"NAME=%s",name);
    fprintf(fptr,"\nAGE=%d",age);
    fprintf(fptr,"\nCGPA=%f",cgpa);

}