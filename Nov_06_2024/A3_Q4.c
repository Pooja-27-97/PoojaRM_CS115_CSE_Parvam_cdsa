#include <stdio.h>
#include <stdbool.h>

bool isPrime(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    printf("Enter an integer: ");
    scanf("%d", &n);
    
    if (isPrime(n)) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}