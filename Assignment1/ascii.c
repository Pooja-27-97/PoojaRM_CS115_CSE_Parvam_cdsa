#include<stdio.h>
int main() {
    char ch;
    scanf("%c",&ch);

    if(ch >='a' && ch <= 'z') {
        printf("%c\n",ch-32);
    }
    else if(ch >='A' && ch <= 'Z') {
        printf("%c\n",ch+32);
    }
    else{
        printf("Invalid input\n");
    }

    return 0;
}
