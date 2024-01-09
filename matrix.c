#include <stdio.h>

void multiplyMatrices(int mat1[][100], int mat2[][100], int result[][100], int rows1, int cols1, int rows2, int cols2);
void transposeMatrix(int mat[][100], int transposed[][100], int rows, int cols);
void displayMatrix(int mat[][100], int rows, int cols);

int main() {
    int mat1[100][100], mat2[100][100], result[100][100], transposed[100][100];
    int rows1, cols1, rows2, cols2;

    // Input for the first matrix
    printf("Enter dimensions of the first matrix (rows columns): ");
    scanf("%d %d", &rows1, &cols1);

    printf("Enter elements of the first matrix:\n");
    for (int i = 0; i < rows1; i++)
        for (int j = 0; j < cols1; j++)
            scanf("%d", &mat1[i][j]);

    // Input for the second matrix
    printf("Enter dimensions of the second matrix (rows columns): ");
    scanf("%d %d", &rows2, &cols2);

    printf("Enter elements of the second matrix:\n");
    for (int i = 0; i < rows2; i++)
        for (int j = 0; j < cols2; j++)
            scanf("%d", &mat2[i][j]);

    // Matrix multiplication
    if (cols1 != rows2)
        printf("Matrix multiplication is not possible.\n");
    else {
        multiplyMatrices(mat1, mat2, result, rows1, cols1, rows2, cols2);
        printf("\nResult of Matrix Multiplication:\n");
        displayMatrix(result, rows1, cols2);
    }

    // Matrix transposition
    transposeMatrix(mat1, transposed, rows1, cols1);
    printf("\nTransposed Matrix:\n");
    displayMatrix(transposed, cols1, rows1);

    return 0;
}

void multiplyMatrices(int mat1[][100], int mat2[][100], int result[][100], int rows1, int cols1, int rows2, int cols2) {
    for (int i = 0; i < rows1; i++)
        for (int j = 0; j < cols2; j++) {
            result[i][j] = 0;
            for (int k = 0; k < cols1; k++)
                result[i][j] += mat1[i][k] * mat2[k][j];
        }
}

void transposeMatrix(int mat[][100], int transposed[][100], int rows, int cols) {
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            transposed[j][i] = mat[i][j];
}

void displayMatrix(int mat[][100], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++)
            printf("%d ", mat[i][j]);
        printf("\n");
    }
}
