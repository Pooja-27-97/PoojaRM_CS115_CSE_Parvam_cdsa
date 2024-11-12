#include<stdio.h>
int main() {
    int row;
    int col;
    printf("Enter the rows and columns: ");
    scanf("%d %d",&row,&col);
    int arr[row][col];
    printf("Enter the elements(0-empty and 1-full) :\n");

    for(int i=0 ; i<row ; i++) {
        for(int j=0 ; j<col ; j++) {
            scanf("%d",&arr[i][j]);
        }
    }
    int max=0;
    int index=-1;
    for(int i=0 ; i<row ; i++) {
        int count=0;
        for(int j=0 ; j<col ; j++) {
            if(arr[i][j] == 1) {
                count++;
            }
        }
        if(count > max) {
            max=count;
            index=i;//to trap the index value
        }
    }
    printf("%d\n",index+1);//printing the index value
    return 0;
}