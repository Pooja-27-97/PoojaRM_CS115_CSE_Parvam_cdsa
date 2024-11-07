#include<stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int count=0;
    
    for(int i=1 ; i <= n ; i++) {
        if(n%i == 0) {
            count++;
        }
    }
    if(count == 2) {
        printf("Prime\n");
    }
    else {
        printf("Not a prime\n");
    }
    return 0;
}