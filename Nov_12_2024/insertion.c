#include<stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0 ; i<n ; i++) {
        scanf("%d",&arr[i]);
    }

    for(int i=0 ; i<n ; i++) {
        int temp=arr[i];//ith value has to be constant throughtout the iteration
        int j=i-1;
        while(j >= 0 && temp<arr[j]) {
            arr[j+1]=arr[j];//shifting
            j--;
        }
        arr[j+1]=temp;//to make complete array sorted
    }
    for(int i=0 ; i<n ; i++) {
        printf("%d\n",arr[i]);
    }
    return 0;
}