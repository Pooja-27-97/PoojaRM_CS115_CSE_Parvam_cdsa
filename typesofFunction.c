#include<stdio.h>

void add() {//fn without argument and without return type
    int a=3,b=4;
    printf("%d\n",a+b);
}
void addArg(int a, int b) {//fn with argument and without return type
    printf("%d\n",a+b);
}
int addWithoutArg(){//fn without argument and with return type(data type of the stored data/value)
    int a=9 , b=10;
    return a+b;
}
int addWithArg(int a, int b) {//fn with argument and with return type
    return a+b;//just store the data and will not print
}
int main() {
    add();
    addArg(1,2);
    printf("%d\n", addWithoutArg());
    printf("%d\n",addWithArg(20,10));

    return 0;
}
