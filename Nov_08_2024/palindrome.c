#include<stdio.h>
#include<string.h>
int isPalindrome(char str[]) {
    int left=0, right=strlen(str)-1;
    while(left<right) {
        if(str[left] != str[right]) {
            return 0;
        }
        left++;
        right--;
    }
    return 1;
}

int main() {
    int n;
    printf("Enter the size: ");
    scanf("%d",&n);
    char str[n];
    //run-time input
    printf("Enter the string value: ");
    scanf("%s",str);
    printf("%d\n",isPalindrome(str));
    return 0;
}