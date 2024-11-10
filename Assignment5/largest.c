#include<stdio.h>
int sum(int num,int arr[]) {
    int max=0;
    for(int i=0 ; i<num ; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    int second=0;
    for(int i=0 ; i<num ; i++) {
        if(arr[i] != max){
            if (arr[i] > second) {
                second = arr[i];
            }
        }
    }
    int sum;
    sum=max+second;
    return sum;
}
int main() {
    int num;
    printf("Enter the size: ");
    scanf("%d",&num);
    int arr[num];
    printf("Enter the elements: ");
    for(int i=0 ; i < num ; i++) {
        scanf("%d",&arr[i]);
    }
    printf("%d\n",sum(num,arr));

    return 0;
}