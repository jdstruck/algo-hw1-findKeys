#include <stdio.h>

void main() {
        int A[] = {1, 5, 10, 100};
        int size = sizeof(A)/sizeof(A[0]);
        int pfA[size];

        for (int i=0; i<size; ++i) {
                printf("%d\n",A[i]);
        }

        int sum = 0;
        for (int i=0; i<size; ++i) {
                sum += A[i];
                pfA[i] = sum / (i+1);
        }

        for (int i=0; i<size; ++i) {
                printf("%d\n", pfA[i]);
        }
}
