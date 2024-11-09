#include<stdio.h>
#define n 5

int front=-1,rear=-1;
int queue[n];

void enqueue() {
    int data;
    printf("Enter the data: ");
    scanf("%d",&data);

    if(rear == n-1) {
        printf("Overflow\n");
    }
    else if(rear == -1 && front == -1) {
        front++;
        queue[rear]=data;
    }
    else{
        rear++;
        queue[rear]=data;
    }
}
void dequeue() {
    if(rear == -1 && front == -1) {
        printf("Underflow\n");
    }
    else{
        front++;
    }
}
void display() {
    if(rear == -1 && front == -1) {
        printf("Empty\n");
    }
    else{
        for(int i=front ; i <= rear ; i++) {
            printf("%d\n",queue[i]);
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
            enqueue();
            break;
            case 2:
            dequeue();
            break;
            case 3:
            display();
            break;
            default:
            printf("Invalid\n");
        }
    }while(choice != 0);
    return 0;
}