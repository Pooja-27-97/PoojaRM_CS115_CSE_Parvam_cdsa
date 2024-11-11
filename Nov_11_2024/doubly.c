#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *next;
    struct node *prev;
};
struct node *head=NULL, *tail=NULL;
void create() {
    struct node *newnode=(struct node *)malloc(sizeof(struct node));
    int value;
    printf("Enter the data: ");
    scanf("%d",&value);
    newnode->data=value;
    newnode->next=NULL;
    newnode->prev=NULL;

    if(head == NULL) {
        tail=head=newnode;
    }
    else{
        tail->next=newnode;
        newnode->prev=tail;
        tail=newnode;
    }
}
void insert_begin() {
    struct node *newnode=(struct node *)malloc(sizeof(struct node));
    int value;
    printf("Enter the data: ");
    scanf("%d",&value);
    newnode->data=value;
    newnode->next=NULL;
    newnode->prev=NULL;

    newnode->next=head;
    head->prev=newnode;
    head=newnode;
}
void insert_end() {
    struct node *newnode=(struct node *)malloc(sizeof(struct node));
    int value;
    printf("Enter the data: ");
    scanf("%d",&value);
    newnode->data=value;
    newnode->next=NULL;
    newnode->prev=NULL;

    tail->next=newnode;
    newnode->prev=tail;
    tail=newnode;
}
void delete_begin() {
    struct node *ptr=head;
    head=head->next;
    head->prev=NULL;
    free(ptr);
}
void delete_end() {
    struct node *temp=tail->prev;
    tail=temp;
    temp=temp->next;
    tail->next=NULL;
    free(temp);
}
void traversal() {
    struct node *temp=head;
    while(temp != NULL) {
        printf("%d\n",temp->data);
        temp=temp->next;
    }
}
int main() {
    int choice;
    do{
        printf("Enter the choice: ");
        scanf("%d",&choice);
        switch(choice) {
            case 1:
            create();
            break;
            case 2:
            insert_begin();
            break;
            case 3:
            insert_end();
            break;
            case 4:
            delete_begin();
            break;
            case 5:
            delete_end();
            break;
            case 6:
            traversal();
            break;
            default:
            printf("Invaild input\n");
        }
    }while(choice != 0);
    return 0;
}