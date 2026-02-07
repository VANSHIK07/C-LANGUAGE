#include<stdio.h>
    struct vector{
        int a;
        int b;
};
int main(){
    int p,q,r,s;
    printf("ENTER TWO ELEMENTS OF FIRST VECTOR:");
    scanf("%d%d",&p,&q);
    printf("ENTER TWO ELEMENTS OF SECOND VECTOR:");
    scanf("%d%d",&r,&s);
    struct vector a1={p,q};
    struct vector b1={r,s};
    int d=(a1.a)+(b1.a);
    int e=(a1.b)+(b1.b);
    printf("sum is (%d,%d)",d,e);
}
