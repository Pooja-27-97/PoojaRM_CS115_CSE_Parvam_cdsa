#include <stdio.h>
#include <string.h>

int main() {
    int n, m;

    printf("Enter the size of main string: ");
    scanf("%d", &n);
    char str[n+1];
    printf("Enter the main string: ");
    scanf("%s", str);

    printf("Enter the size of sub-string: ");
    scanf("%d", &m);
    char str1[m+1];
    printf("Enter the sub-string: ");
    scanf("%s", str1);

    int count = 0;

    for (int i = 0; i < strlen(str1); i++) {
        for (int j = 0; j < strlen(str); j++) {
            if (str1[i] == str[j]) {
                count++;
                break;
            }
        }
    }

    if (count == strlen(str1)) {
        printf("true\n");
    } else {
        printf("false\n");
    }

    return 0;
}
