#include<stdio.h>
#include<stdlib.h>
int main() {
    int n;
    printf("Enter thye size: ");
    scanf("%d",&n);
    int *dynamic = (int *)malloc(n*sizeof(int));

    for(int i=0 ; i<n ; i++) {
        scanf("%d",&dynamic[i]);
    }

    int extra;
    printf("Enter extra size: ");
    scanf("%d",&extra);
    dynamic=realloc(dynamic,(n+extra)*sizeof(int));//extends the array of provided size

    for(int i=n ; i<(n+extra) ; i++) {//starts from the last index of the previously allocated array
        scanf("%d",&dynamic[i]);
    }

    printf("After reallocation : ");
    for(int i=0 ; i<(n+extra) ; i++) {
        printf("%d\n",dynamic[i]);
    }
    return 0;
}