#include<stdio.h>

int main() {
    int n=20;

    for(int i=1; i<=n ; i+=2) {//Logarthemic time -->O(log n)
        printf("* ");
    }
    printf("\n");
    return 0;
}