#include<stdio.h>
int main() {
    int n;
    scanf("%d",&n);

    if(n%4 != 0) {
        printf("True\n");
    }
    else {
        printf("False\n");
    }

    return 0;
}