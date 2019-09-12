#include <stdio.h>

void main()
{
        int A[] = {0,1,0,1,0,1,0,1};
        int size = sizeof(A)/sizeof(A[0]);

        for (int i=0; i<size; ++i) {
                printf("%d", A[i]); 
        }

        for (int i=1; i<size; ++i) {
                int prev = A[0];
                if (A[i] > prev) {
                        swap()
                }
                printf("%d", A[i]); 
        }

        
}
