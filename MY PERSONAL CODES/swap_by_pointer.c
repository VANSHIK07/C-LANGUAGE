#include<stdio.h>
void swap(int *a,int *b){
    int t=*a;
    *a=*b;
    *b=t;
    printf("a=%d  b=%d\n",*a,*b);
}
int main(){
      int x=3,y=5;
      swap(&x,&y);
      printf("x=%d  y=%d",x,y);
}