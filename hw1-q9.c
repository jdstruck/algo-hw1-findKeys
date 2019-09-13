#include <stdio.h>

int main()
{
        int A[] = {0,1,0,1,0,1,0,1};
        int size = sizeof(A)/sizeof(A[0]);

        for (int i=0; i<size; ++i) {
                printf("%d", A[i]); 
        }

        printf("\n\n");

        for (int i=0; i<size/2; ++i) {
                int prev = A[i];
                for (int j=i+1; j<size-i; ++j) {
                        if (A[j] > prev) {
                                int tmp = A[j];
                                A[j] = prev;
                                A[j-1] = tmp;
                                for (int i=0; i<size; ++i) {
                                        printf("%d", A[i]); 
                                }
                                printf("\n"); 
                        }
                        prev = A[j];
                }
        }

        //for (int i=0; i<size; ++i) {
        //        printf("%d", A[i]); 
        //}

        return 0;        
}
