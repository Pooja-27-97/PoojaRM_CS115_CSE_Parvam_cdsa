#include<stdio.h>
int isFull(int n,int arr[],int enough) {
    if(n == 0) {
        return -1;
    }
    int sum=0;
    for(int i=0 ; i<n ; i++) {
        sum=sum+arr[i];
        if(sum >= enough) {
            return i+1;
        }
    }
    return 0;
}
int main() {
    int r;
    printf("Enter the no. of rats: ");
    scanf("%d",&r);
    int h;
    printf("Enter the no. of foods: ");
    scanf("%d",&h);

    int n;
    printf("Enter the size: ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0 ; i<n ; i++) {
        scanf("%d",&arr[i]);
    }
    int product=r*h;
    printf("%d\n",isFull(n,arr,product));
    return 0;
}