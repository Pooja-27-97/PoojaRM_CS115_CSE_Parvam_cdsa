#include<stdio.h>
int main() {
    int size;
    scanf("%d",&size);
    int arr[size];
    for(int i=0 ; i<size ; i++) {
        scanf("%d",&arr[i]);
    }
    int max=0;
    for(int i=0 ; i<size ; i++) {
        if(arr[i] > max) {
            max=arr[i];
        }
    }
    printf("%d\n",max);

    return 0;
}