#include<stdio.h>

int main() {
    int n=5;

    for(int i=0; i<n ; i++) {
        for(int j=0 ; j<n ; j++) {//Quadratic time -->O(n^2)
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}