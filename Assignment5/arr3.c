#include<stdio.h>
int isPresent(int n , int arr[], int a,int b){
    for(int i=0 ; i<n ; i++) {
        if(a == arr[i]) {
            for(int i=0 ; i<n ; i++) {
                if(b == arr[i]){
                    return 1;
                }
            }
        }
    }
    return 0;
}
int main() {
    const int a,b;
    printf("Enter the 2 target numbers: ");
    scanf("%d %d",&a,&b);
    int num;
    printf("Enter the size: ");
    scanf("%d",&num);
    int arr[num];
    printf("Enter the elements: ");
    for(int i=0 ; i < num ; i++) {
        scanf("%d",&arr[i]);
    }
    printf("%d\n",isPresent(num,arr,a,b));

    return 0;
}