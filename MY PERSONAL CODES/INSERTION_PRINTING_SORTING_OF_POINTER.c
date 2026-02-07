#include<stdio.h>
int main(){
    int a[5],*p,i,temp,j;
    p=a;
    printf("ENTER 5 NUMBERS:");
    for(i=0;i<=4;i++){
        scanf("%d",p);
        p++;
    }
    p=a;
    printf("YOUR ARRAY IS:");
    for(i=0;i<=4;i++){
        printf("\t%d",*p);
        p++;
    }

    //sorting:
    for(i=0;i<5;i++){
        for(j=0;j<5-i-1;j++){
            if(a[j+1]>a[j]){
                temp=a[j+1];
                a[j+1]=a[j];
                a[j]=temp;
            }
        }   
     }
    printf("\nDESCENDING ORDER ARRAY:");
    for(i=0;i<5;i++){
        printf("\t%d",a[i]);
    }

     for(i=0;i<5;i++){
        for(j=0;j<5-i-1;j++){
            if(a[j+1]<a[j]){
                temp=a[j+1];
                a[j+1]=a[j];
                a[j]=temp;
            }
        }   
     }
    printf("\nASCENDING ORDER ARRAY:");
    for(i=0;i<5;i++){
        printf("\t%d",a[i]);
    }

}
