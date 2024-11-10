#include<stdio.h>
int isPresent(int n , int arr[], int a){
    for(int i=0 ; i<n ; i++) {
        if(a == arr[i]) {
            return 1;
        }
    }
    return 0;
}
int main() {
    const int a;
    printf("Enter the 1 target numbers: ");
    scanf("%d",&a);
    int num;
    printf("Enter the size: ");
    scanf("%d",&num);
    int arr[num];
    printf("Enter the elements: ");
    for(int i=0 ; i < num ; i++) {
        scanf("%d",&arr[i]);
    }
    printf("%d\n",isPresent(num,arr,a));

    return 0;
}