#include<stdio.h>

int main() {
    int n=5;

    for(int i=0; i<n ; i++) {
        for(int j=0 ; j<n ; j++) {
           for(int k=0 ; k<n ; k++) {//Cubic time -->O(n^3)
             printf("* ");
           }
           printf("\n");
        }
        printf("\n");
    }
    return 0;
}