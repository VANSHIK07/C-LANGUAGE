#include<stdio.h>
int main(){
    int a;
    printf("ENTER A NUMBER:");
    scanf("%d",&a);
    printf("%d",van2(a));
}
int van2(int n){
    if(n==0){
        return 0;
    }
    return (n%10)+van2(n/=10);
}