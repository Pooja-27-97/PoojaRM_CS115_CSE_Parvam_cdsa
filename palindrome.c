#include<stdio.h>

int main() {
    int num;
    scanf("%d",&num);

    int n=num;
    int r=0;
    while(num != 0) {
        int rem = num%10;
        r = r*10+rem;
        num = num/10;
    }
    if(n == r) {
        printf("Palindrome\n");
    }
    else {
        printf("Not palindrome\n");
    }
    return 0;
}