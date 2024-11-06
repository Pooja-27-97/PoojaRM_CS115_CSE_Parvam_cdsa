#include<stdio.h>
int main(){
    int a= 12,b=5,c=16;
    if(a>b) {
        if(a>c) {
            printf("true");
        }
        else{
            printf("false");
        }
    }
    else {
        printf("Invalid");
    }
    printf("\n");
    return 0;
}