#include <stdio.h>

#define ROWS1 3
#define COLS1 2
#define ROWS2 2
#define COLS2 3

// Function to perform matrix multiplication
void matrixMultiply(int mat1[ROWS1][COLS1], int mat2[ROWS2][COLS2], int result[ROWS1][COLS2]) {
    int i, j, k;

    for (i = 0; i < ROWS1; i++) {
        for (j = 0; j < COLS2; j++) {
            result[i][j] = 0;
            for (k = 0; k < COLS1; k++) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}

int main() {
    int matrix1[ROWS1][COLS1] = {{1, 2},
                                  {3, 4},
                                  {5, 6}};

    int matrix2[ROWS2][COLS2] = {{7, 8, 9},
                                  {10, 11, 12}};

    int result[ROWS1][COLS2];

    // Perform matrix multiplication
    matrixMultiply(matrix1, matrix2, result);

    // Print the resulting matrix
    printf("Resulting matrix:\n");
    for (int i = 0; i < ROWS1; i++) {
        for (int j = 0; j < COLS2; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
