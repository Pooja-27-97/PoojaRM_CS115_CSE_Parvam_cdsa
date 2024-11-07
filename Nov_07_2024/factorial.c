#include<stdio.h>
int fact(int n) {
    int num=1;
    if(n == 0) {
        return 1;
    }
    else{
        for(int i=1 ; i<=n ; i++) {
            num = num*i;
        }
        return num;
    }
}
int main() {
    printf("%d\n",fact(5));
    printf("%d\n",fact(3));
    printf("%d\n",fact(6));
    printf("%d\n",fact(0));
    printf("%d\n",fact(1));

    return 0;
}