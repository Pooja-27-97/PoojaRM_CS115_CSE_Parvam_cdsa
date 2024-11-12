#include<stdio.h>
int main (){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0 ; i<n ; i++) {
        scanf("%d",&arr[i]);
    }//O(n^2)
    for(int i=0 ; i<n-1 ; i++) {//goes upto last index-1
        for(int j=0 ; j<n-i-1; j++) {//based on i,the iteration takes place
            if(arr[j] > arr[j+1]) {//checking the min value considering 2 indexes
                int temp=arr[j];//swapping or replacing the elements
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    for(int i=0 ; i<n ; i++) {
        printf("%d\n",arr[i]);
    }
    return 0;
}