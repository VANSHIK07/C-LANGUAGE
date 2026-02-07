#include<stdio.h>
#include<string.h>
struct student{
    int roll;
    float cgpa;
    char name[100];
};
int main(){
    struct student s1;
    s1.roll=92;
    s1.cgpa=9.9;
    strcpy((s1.name),"vanshik");
    printf("%s",s1.name);
printf("\n%f",s1.cgpa);
printf("\n%d",s1.roll);

struct student s2;
    s2.roll=97;
    s2.cgpa=10;
    strcpy((s2.name),"reny");
    printf("\n%d",s2.roll);
    printf("\n%s",s2.name);
    printf("\n%f",s2.cgpa);
}