#include<stdio.h>
int isPresent(int n , int arr[], int a){
    int left=0 ,right=n-1;
    while(left < right) {
        int mid=left+(right-left)/2;//formula
        if(a == arr[mid]) {
            return mid;//printing the index of target element
        }
        else if(a < arr[mid]) {
            right = mid-1;
        }
        else{
            left = mid+1;
        }
    }
    return -1;
}
int main() {
    const int a;
    printf("Enter the 1 target numbers: ");
    scanf("%d",&a);
    int num;
    printf("Enter the size: ");
    scanf("%d",&num);
    int arr[num];
    printf("Enter the elements: ");//sorted arrays and elements
    for(int i=0 ; i < num ; i++) {
        scanf("%d",&arr[i]);
    }
    printf("%d\n",isPresent(num,arr,a));

    return 0;
}