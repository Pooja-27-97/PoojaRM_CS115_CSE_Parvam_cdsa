#include<stdio.h>
#include<stdlib.h>
int main() {
    int n=10;
    int *arr = (int *)malloc(n*sizeof(int));
    int num;
    scanf("%d",&num);
    arr=realloc(arr,num*sizeof(int));
    for(int i=0 ; i < num ; i++) {
        scanf("%d",&arr[i]);
    }

    for(int i=(num-1) ; i>=0 ; i--) {
        printf("%d ",arr[i]);
    }

    return 0;
}