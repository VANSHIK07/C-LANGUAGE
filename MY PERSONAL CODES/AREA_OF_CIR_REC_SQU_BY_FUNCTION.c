#include<stdio.h>
void sqa(int a){
    int area=a*a;
    printf("%d\n",area);
}
void rec(int a,int b){
    int area=a*b;
    printf("%d\n",area);
}
void cir(int r){
    float area=(3.14)*r*r;
    printf("area=%f\n",area);
}
int main(){
    int a,b,r;
    printf("enter a:");
    scanf("%d",&a);
    printf("enter b:");
    scanf("%d",&b);
    printf("enter r:");
    scanf("%d",&r);
    sqa(a);
    rec(a,b);
    cir(r);
}