#include<stdio.h>
//call by value
void sqaure(int n){
    n=n*n;
    printf("sqaure=%d\n",n);
}
//call by reference
void _square(int* n){
    *n=(*n) * (*n);
    printf("sqaure=%d\n",*n);
}
int main(){
    int num=4;
    sqaure(num);
    printf("number=%d\n",num);
    sqaure(&num);
    printf("number=%d\n",num);
}