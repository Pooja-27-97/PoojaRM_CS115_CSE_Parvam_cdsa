#include<stdio.h>

int main() {
    int num;
    scanf("%d",&num);

    if(num >= 10 && num <= 20 && num%2 == 0) {
        printf("Valid");
    }
    else {
        printf("Invalid");
    }
    return 0;
}