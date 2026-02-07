#include<stdio.h>
    struct vanshik{
    char name[100];
    float cgpa;
    char clgname[100];
};
int main(){
    struct vanshik a;
    a.cgpa=9.8;
    strcpy(a.name,"VANSHIK");
    strcpy(a.clgname,"PDPU");
    printf("%f",a.cgpa);
    printf("\n%s",a.name);
    printf("\n%s",a.clgname);
}