#include <stdio.h>

int main() {
    int hexValue;

    printf("Enter a hexadecimal value (up to 4 digits): ");
    scanf("%x", &hexValue);

    //decimal
    printf("%5d\n", hexValue);

    //octal
    printf("%5o\n", hexValue);

    //uppercase hexadecimal
    printf("%5X\n", hexValue);

    return 0;
}
