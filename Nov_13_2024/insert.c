#include<stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int arr[n+1];
    for(int i=0 ; i<n ; i++) {
        scanf("%d",&arr[i]);
    }

    int elt;
    scanf("%d",&elt);
    for(int i=n ; i>0 ; i--) {
        arr[i] = arr[i-1];
    }
    arr[0]=elt;

    for(int i=0 ; i<=n ; i++) {
        printf("%d\n",arr[i]);
    }

    return 0;
}