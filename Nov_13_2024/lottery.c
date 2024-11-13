#include<stdio.h>
int find(int n,int a, int b) {
    while(n != 0) {
        if((n%10 != a) && (n%10 != b)) {//checking with unit digit number
            return 0;
        }
        n=n/10;//making unit digit
    }
    return 1;
}
int main() {
    int a,b;
    scanf("%d %d",&a,&b);

    int r;
    printf("Enter the range: ");
    scanf("%d",&r);

    for(int i=1 ; i<r ; i++) {
        if(find(i,a,b)) {
            printf("%d\n",i);
        }
    }
    return 0;
}