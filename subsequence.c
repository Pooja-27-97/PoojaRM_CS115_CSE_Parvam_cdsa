#include<stdio.h>
#include<string.h>
int main() {
    // int n;
    // printf("Enter the size of main string: ");
    // scanf("%d",&n);
    char str[20]="hello";
    // printf("Enter the main string: ");
    // scanf("%s",&str);

    // int m;
    // printf("Enter the size of sub-string: ");
    // scanf("%d",&m);
    char str1[10]="helo";
    // printf("Enter the sub-string: ");
    // scanf("%s",&str1);

    int count=0;
    for(int i=0 ; i<strlen(str1) ; i++) {
        for(int j=0 ; j<strlen(str) ; j++) {
            if(str[i] != str1[j]) {
                count++;
            }
        }
    }
    if(count == strlen(str1)) {
        printf("true\n");
    }
    else{
        printf("false\n");
    }

    return 0;
}