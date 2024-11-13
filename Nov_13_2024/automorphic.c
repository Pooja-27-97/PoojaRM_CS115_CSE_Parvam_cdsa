#include<stdio.h>
int isAuto(int n,int sq) {
    while(n != 0) {//only digit of n
        if(n%10 != sq%10) {//checking the unit digit numbers
            return 0;
        }
        n=n/10;
        sq=sq/10;
    }
    return 1;
}
int main() {
    int n;
    scanf("%d",&n);

    int sq=n*n;
    if(isAuto(n,sq)) {
        printf("Yes\n");
    }
    else{
        printf("No\n");
    }

    return 0;
}