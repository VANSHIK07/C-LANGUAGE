#include<stdio.h>
void van(int count){
    if(count==0){
        return;
    }
    printf("HELLO WORLD\n");
    van(count-1);
}
int main(){
    van(2);
}