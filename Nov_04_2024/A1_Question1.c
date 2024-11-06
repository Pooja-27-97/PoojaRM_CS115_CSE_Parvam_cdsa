#include <stdio.h>

int main() {
    char ch;
    char str[100];
    char sentence[100];

    printf("Enter character: ");
    scanf("%c", &ch);
    getchar();//newline character

    printf("Enter String value: ");
    scanf("%s", str);
    getchar();

    printf("Enter sentence: ");
    scanf("%[^\n]%*c", sentence);

    // Output
    printf("%c\n", ch);
    printf("%s\n", str);
    printf("%s\n", sentence);

    return 0;
}
