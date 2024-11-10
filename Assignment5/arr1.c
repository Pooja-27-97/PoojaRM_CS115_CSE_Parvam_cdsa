#include<stdio.h>
#include<stdlib.h>
int main(){
    int n=10;
    int *arr = (int *)malloc(n*sizeof(int));
    int num;
    scanf("%d",&num);
    arr=realloc(arr,num*sizeof(int));
    for(int i=0 ; i < num ; i++) {
        scanf("%d",&arr[i]);
    }
    int sum=0;

    for(int i=0 ; i<num ; i++) {
        sum = sum+arr[i];
    }

    printf("%d\n",sum);

    return 0;
}