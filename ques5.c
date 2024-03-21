#include <stdio.h>

#define ROWS 3
#define COLS 3

// Function to right rotate the matrix
void rightRotate(int mat[][COLS], int n) {
    int temp[ROWS][COLS];

    // Normalize the rotation count to be within [0, COLS)
    n = n % COLS;
    if (n < 0)
        n += COLS;

    // Copy elements of the matrix to temp array
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            temp[i][(j + n) % COLS] = mat[i][j];
        }
    }

    // Copy elements back to matrix
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            mat[i][j] = temp[i][j];
        }
    }
}

// Function to print the matrix
void printMatrix(int mat[][COLS]) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("%d\t", mat[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matrix[ROWS][COLS] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int rotations;
    printf("Enter number of right rotations: ");
    scanf("%d", &rotations);

    printf("Original Matrix:\n");
    printMatrix(matrix);

    // Right rotate the matrix n times
    rightRotate(matrix, rotations);

    printf("\nMatrix after %d right rotations:\n", rotations);
    printMatrix(matrix);

    return 0;
}
