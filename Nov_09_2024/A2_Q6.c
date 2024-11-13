#include <stdio.h>
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
int main() {
    int T;
    printf("Enter the number of test cases: ");
    scanf("%d", &T);

    while (T--) {
        int N;
        printf("Enter the size of the array: ");
        scanf("%d", &N);

        int arr[N];
        printf("Enter the elements of the array: ");
        for (int i = 0; i < N; i++) {
            scanf("%d", &arr[i]);
        }

        int max1 = 0, max2 = 0;
        for (int i = 0; i < N; i++) {
            if (arr[i] > max1) {
                max2 = max1;
                max1 = arr[i];
            }
            else if (arr[i] > max2 && arr[i] != max1) {
                max2 = arr[i];
            }
        }
        // Calculate the maximum sum of two distinct integers
        int maxSum = max1 + max2;
        // Calculate GCD of maxSum and the second largest integer
        int result = gcd(maxSum, max2);

        printf("%d\n", result);
    }
    return 0;
}
