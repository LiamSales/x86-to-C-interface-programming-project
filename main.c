#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Perform the dot product of two vectors
void dot_product(float *A, float *B, int n, float *sdot) {
    float result = 0.0f;
    for (int i = 0; i < n; i++) {
        result += A[i] * B[i];
    }
    *sdot = result;
}

int main() {
    srand(time(NULL));

    int n = 1000000;
    float *A = (float *)malloc(n * sizeof(float));
    float *B = (float *)malloc(n * sizeof(float));
    float sdot;

    // Initialize vectors A and B with random values
    for (int i = 0; i < n; i++) {
        A[i] = (float)rand() / RAND_MAX;
        B[i] = (float)rand() / RAND_MAX;
    }

    // Call the dot product function
    dot_product(A, B, n, &sdot);

    printf("Dot product result: %f\n", sdot);

    free(A);
    free(B);

    return 0;
}
