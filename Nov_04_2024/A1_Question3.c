#include<stdio.h>

int main() {
    char ch;
    printf("Enter any character : ");
    scanf("%c",&ch);

    if(ch >= 'A' && ch <= 'Z') {
        printf("After converting upper to lower case %c\n",ch+32);
    }
    else if(ch >= 'a' && ch <= 'z') {
        printf("After converting lower to upper case %c\n",ch-32);
    }
    else{
        printf("Invalid input");
    }
    return 0;
}