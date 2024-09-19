#include<stdio.h>
#include<limits.h>

int setmini(int A[], int N) {
    int mini = INT_MAX;
    for (int i = 0; i < N; i++) {
        if (A[i] < mini) {
            mini = A[i];
        }
    }
    return mini;
}

int setmaxi(int A[], int N) {
    int maxi = INT_MIN;
    for (int i = 0; i < N; i++) {
        if (A[i] > maxi) {
            maxi = A[i];
        }
    }
    return maxi;
}

int main() {
    int A[] = { 4, 9, 6, 5, 2, 3 };
    int N = sizeof(A) / sizeof(A[0]); // Calculate the number of elements
    printf("Minimum element is: %d\n", setmini(A, N));
    printf("Maximum element is: %d\n", setmaxi(A, N));
    return 0;
}
