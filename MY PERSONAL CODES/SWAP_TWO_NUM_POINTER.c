#include<stdio.h>
void van(int *a,int *b){
    int c=*a;
    *a=*b;
    *b=c;
}
int main(){
    int x=5,y=3;
    van(&x,&y);
    printf("%d & %d",x,y);
}