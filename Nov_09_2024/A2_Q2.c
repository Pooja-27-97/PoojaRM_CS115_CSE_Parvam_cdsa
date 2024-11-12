#include<stdio.h>
void update(int *a,int *b) {
    int sum;
    int rem;
    sum = *a + *b;
    rem = *b % *a;
    printf("Sum: %d\n",sum);
    printf("Remainder: %d\n",rem);
}
int main() {
    int a,b;
    printf("Enter value for a and b: ");
    scanf("%d %d",&a,&b);

    update(&a,&b);

    return 0;
}