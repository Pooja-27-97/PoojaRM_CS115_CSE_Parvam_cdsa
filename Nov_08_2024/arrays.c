#include<stdio.h>
int main() {
    int n;
    printf("Enter the size: ");
    scanf("%d",&n);
    int arr[n];

    printf("Enter the elements:\n");
    for(int i=0 ; i<n ; i++) {//inserting the elements
        scanf("%d",&arr[i]);
    }
    printf("Array elements are:\n");
    for(int i=0 ; i<n ; i++) {//printing the elements
        printf("%d\n",arr[i]);
    }
    return 0;
}