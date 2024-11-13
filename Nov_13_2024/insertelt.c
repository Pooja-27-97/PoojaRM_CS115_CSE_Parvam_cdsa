#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    scanf("%d",&n);
    int *arr=(int *)malloc(n*sizeof(int));
    for(int i=0 ; i<n ; i++) {
        scanf("%d",&arr[i]);
    }
    int size;
    printf("Enter the number of extra details: ");
    scanf("%d",&size);
    arr=realloc(arr,(n+size)*sizeof(int));
    int target;
    printf("Enter the target number: ");
    scanf("%d",&target);

    for(int i=n ; i>0 ; i--) {
        arr[i] = arr[i-1];
    }
    arr[0]=target;

    printf("Final output:\n");
    for(int i=0 ; i<(n+size) ; i++) {
        printf("%d\n",arr[i]);
    }
    return 0;
}