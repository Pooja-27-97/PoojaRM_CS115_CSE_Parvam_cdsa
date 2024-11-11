#include<stdio.h>
int smallest(int arr[],int n) {
    int small=arr[0];
    for(int i=0 ; i<n ; i++) {
        if (arr[i] < small) {
            small=arr[i];
        }
    }
    int sec=arr[1];
    for(int i=0 ; i<n ; i++) {
        if (arr[i] != small) {
            if(sec > arr[i]) {
                sec=arr[i];
            }
        }
    }
    return sec;
}
int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0 ; i<n ; i++) {
        scanf("%d",&arr[i]);
    }
    printf("%d\n",smallest(arr,n));
    return 0;
}