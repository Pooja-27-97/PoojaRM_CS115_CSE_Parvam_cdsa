#include<stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int m;
    scanf("%d",&m);
    int arr[n][m];
    for(int i=0 ; i<n ; i++) {
        for(int j=0 ; j<m ; j++) {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("Transpose of matrix:\n");
    for(int i=0 ; i<n ; i++) {
        for(int j=0 ; j<m ; j++) {
            printf("%d ",arr[j][i]);
        }
        printf("\n");
    }
    return 0;
}