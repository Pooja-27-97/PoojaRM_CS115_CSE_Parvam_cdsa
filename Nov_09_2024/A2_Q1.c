#include <stdio.h>
#include <ctype.h>
#include <string.h>

int isPalindrome(char s[]) {
    int left = 0, right = strlen(s) - 1;
    while (left < right) {

        while (left < right && !isalnum(s[left]))
            left++;
        while (left < right && !isalnum(s[right]))
            right--;
        // Compare characters, ignoring case
        if (tolower(s[left]) != tolower(s[right]))
            return 0;
        left++;
        right--;
    }
    return 1;
}

int main() {
    char s[1000];
    printf("Enter the string: ");
    scanf("%[^\n]", s); // This format specifier reads until a newline or 999 characters
    
    if (isPalindrome(s)) {
        printf("true\n");
    } else {
        printf("false\n");
    }

    return 0;
}
