#include<stdio.h>
int fact(int n){
    if(n==1){
        return 1;
    }
    int factNm1=fact(n-1);
    int factN=factNm1*n;
    return factN;
}
int main(){
    int a;
    printf("enter n:");
    scanf("%d",&a);
    printf("%d",fact(a));

}