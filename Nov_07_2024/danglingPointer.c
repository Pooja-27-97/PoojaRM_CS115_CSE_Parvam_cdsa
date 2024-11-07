#include<stdio.h>
int *add() {
    int a=10;
    return &a;
}
int main(){
    int a=5;
    int *c = add(a);
    printf("%p",c);

    return 0;
}