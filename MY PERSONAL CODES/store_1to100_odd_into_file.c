#include<stdio.h>
int main(){
    FILE *fptr;
    fptr=fopen("vanshik.txt","w");
    for(int i=1;i<=100;i++){
        if (i%2!=0){
            fprintf(fptr,"%d\n",i);
        }
    }
}