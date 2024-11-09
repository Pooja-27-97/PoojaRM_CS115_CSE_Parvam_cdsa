#include<stdio.h>
struct student{//keyword and tag name
    int rollno;//only declaration
    float marks;
}s;
int main(){
    // struct student s;//data type and variable name
    s.rollno=24;//initialization
    s.marks=27.97;

    printf("%d\n",s.rollno);
    printf("%.2f\n",s.marks);
    return 0;
}