#include<stdio.h>
int main() {
    int a=10;
    int *ptr = &a;//single pointer
    int **ptr2 = &ptr;//double pointer
    printf("%p\n",ptr);//prints the address of the variable
    printf("%d\n",*ptr);//prints the data of the variable
    printf("%p\n",ptr2);
    printf("%d\n",**ptr2);

    return 0;
}