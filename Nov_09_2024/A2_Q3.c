#include<stdio.h>
int main() {
    int n;
    printf("Enter the size: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements:\n");
    for(int i=0; i<n ; i++) {
        scanf("%d",&arr[i]);
    }
    
    int target;
    printf("Enter the target element: ");
    scanf("%d",&target);

    int count=0;
    for(int i=0 ; i<n ; i++) {
        if(target == arr[i]) {
            count++;
        }
    }

    printf("Occurences: %d",count);

    return 0;
}