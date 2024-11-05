#include <stdio.h>

int main() {
    int units;
    float bill = 0.0;

    printf("Enter the number of units consumed: ");
    scanf("%d", &units);

    if (units <= 100) {
        bill = units * 5;
    }
    else if (units <= 200) {
        bill = 100 * 5 + (units - 100) * 8;
    }
    else {
        bill = 100 * 5 + 100 * 8 + (units - 200) * 10;
    }

    printf("The electricity bill is: %.2f\n", bill);

    return 0;
}
