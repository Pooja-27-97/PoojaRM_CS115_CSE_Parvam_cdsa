#include<stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0 ; i<n ; i++) {
        scanf("%d",&arr[i]);
    }
    int result=0;
    for(int i=0 ; i<n ; i++) {
        result = result^arr[i];//eliminating the repeated numbers(repeated number is cancelled by Zero)
    }

    printf("%d\n",result);

    return 0;
}