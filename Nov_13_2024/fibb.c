#include<stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int n1, n2;
    scanf("%d %d",&n1,&n2);
    printf("%d\n%d\n",n1,n2);

    for(int i=3 ; i<=n ; i++) {
        int n3=n1+n2;
        printf("%d\n",n3);
        n1=n2;
        n2=n3;
    }
    return 0;
}
