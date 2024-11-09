#include<stdio.h>
#define n 5

int top=-1;
int stack[n];

void push() {
    int data;
    printf("Enter the data: ");
    scanf("%d",&data);

    if(top == n-1) {
        printf("Overflow\n");
    }
    else{
        top++;
        stack[top]=data;
    }
}
void pop() {
    if(top == -1) {
        printf("Underflow\n");
    }
    else{
        top--;
    }
}
void peek() {
    if(top == -1) {
        printf("Underflow\n");
    }
    else{
        printf("%d\n",stack[top]);
    }
}
void display() {
    if(top == -1) {
        printf("Empty\n");
    }
    else{
        for(int i=top ; i>=0 ; i--) {
            printf("%d\n",stack[i]);
        }
    }
}
int main() {
    int choice;
    do{
        printf("Enter your choice: ");
        scanf("%d",&choice);

        switch(choice) {
            case 1:
            push();
            break;
            case 2:
            pop();
            break;
            case 3:
            peek();
            break;
            case 4:
            display();
            break;
            default:
            printf("Invalid\n");
        }
    }while(choice != 0);
    return 0;
}