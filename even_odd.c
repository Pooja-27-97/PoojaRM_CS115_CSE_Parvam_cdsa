#include<stdio.h>
int main() {
    int num;
    scanf("%d",&num);
    if(num/2 != (float)num/2) {
        printf("odd");
    }
    else{
        printf("even");
    }
    printf("\n");
    return 0;
}