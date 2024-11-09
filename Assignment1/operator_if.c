#include<stdio.h>
int main() {
    int n;
    scanf("%d",&n);

    if(n >= 10 && n <= 20 && (n%2 == 0)){
        printf("valid\n");
    }
    else{
        printf("Invalid\n");
    }

    return 0;
}