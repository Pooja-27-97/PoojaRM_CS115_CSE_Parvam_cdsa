#include<stdio.h>
int isOdd(int n , int arr[]) {
    for(int i=0 ; i<n-2 ; i++) {
        if((arr[i] != 0) && (arr[i+1] != 0) && (arr[i+2] != 0)) {
            return 1;
        }
    }
    return 0;
}
int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0 ; i<n ; i++) {
        scanf("%d",&arr[i]);
    }
    if(isOdd(n,arr)) {
        printf("true\n");
    }
    else{
        printf("False\n");
    }

    return 0;
}