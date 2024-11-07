#include<stdio.h>
void natural(int a) {
    if(a <= 0) {
        return;
    }
    natural(a-1);
    printf("%d\n",a);
}
int main() {
    int n;
    scanf("%d",&n);

    natural(n);
    return 0;
}