#include<stdio.h>

int a=10;//global variable, can be accessed throughtout the program
void add() {
    printf("%d",a);
}
void sub() {
    int b=20;//Local variable, which can be accessed within in that function
    printf('%d',b);
    printf("%d",a);
}
int main() {
    addd();
    sub();
}