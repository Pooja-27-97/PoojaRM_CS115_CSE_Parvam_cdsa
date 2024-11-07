#include<stdio.h>
int main() {
    int a=5;
    int *ptr = &a;
    printf("%d\n",ptr);
    ptr++;//gets incremented by the size of the data type
    printf("%d\n",ptr);

    return 0;
}