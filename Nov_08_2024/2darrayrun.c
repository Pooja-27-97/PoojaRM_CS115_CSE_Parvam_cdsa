#include<stdio.h>
int main() {
    int r;
    scanf("%d",&r);
    int c;
    scanf("%d",&c);
    int arr[r][c];
    //run time input
    for(int i=0 ; i<r ; i++) {
        for(int j=0 ; j<c ; j++) {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("The 2D array elements are:\n");
    //time complexity --> O(n^2)
    for(int i=0 ; i<r ; i++) {//rows
        for(int j=0 ; j<c ; j++) {//columns
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}