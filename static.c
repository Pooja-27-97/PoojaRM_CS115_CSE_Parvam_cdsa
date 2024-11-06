#include<stdio.h>

void add() {
    static int a=10;//created only once
    a++;
    printf("%d\n",a);
}
void sub() {
    int b=20;//re-initilized nand created multiple times
    b++;
    printf("%d\n",b);
}
int main(){
    add();
    add();
    add();
    sub();
    sub();
    sub();
    return 0;
}