#include<stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int arr[n][n];
    for(int i=0 ; i<n ; i++) {
        for(int j=0 ; j<n ; j++) {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("Transpose of matrix:\n");
    for(int i=0 ; i<n ; i++) {
        for(int j=0 ; j<n ; j++) {
            printf("%d ",arr[i][j]);//exchanging rows and columns
        }
        printf("\n");
    }
    return 0;
}