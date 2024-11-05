#include<stdio.h>

int main() {
    int age;
    int income;

    printf("Enter age and income: ");
    scanf("%d %d",&age,&income);

    if(age >= 18 && age <= 60) {
        if(age >= 18 && age <= 25 && income >= 5000 && income <= 50000) {
            printf("Eligible");
        }
        else if(age >= 26 && age <= 40 && income >= 10000 && income <= 50000) {
            printf("Eligible");
        }
        else if(age >= 40 && income >= 15000 && income <= 50000) {
            printf("Eligible");
        }
        else {
            printf("Not Eligible");
        }
    }
    else {
        printf("Not Eligible");
    }
    return 0;
}