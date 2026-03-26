#include <stdio.h>
#define MAX 10
void printMatrix(int mat[][MAX], int r, int c) {
    int i, j;
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++)
            printf("%5d", mat[i][j]);
        printf("\n");
    }
}
void addMatrix(int a[][MAX], int b[][MAX], int r, int c) {
    int i, j;
    printf("\nAddition Result :\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++)
            printf("%5d", a[i][j] + b[i][j]);
        printf("\n");
    }
}
void saddlePoint(int mat[][MAX], int r, int c) {
    int i, j, k, rowMin, colMax, found = 0;
    printf("\nSaddle Point :-\n");
    for (i = 0; i < r; i++) {
        rowMin = mat[i][0];
        for (j = 0; j < c; j++)
            if (mat[i][j] < rowMin) rowMin = mat[i][j];
        for (j = 0; j < c; j++) {
            if (mat[i][j] == rowMin) {
                colMax = mat[0][j];
                for (k = 0; k < r; k++)
                    if (mat[k][j] > colMax) colMax = mat[k][j];
                if (rowMin == colMax) {
                    printf("Saddle point at [%d][%d] = %d\n", i+1, j+1, mat[i][j]);
                    found = 1;
                }
            }
        }
    }
    if (!found) printf("No saddle point found.\n");
}
void inverseMatrix(int mat[][MAX]) {
    float det = mat[0][0]*mat[1][1] - mat[0][1]*mat[1][0];
    printf("\nInverse of 2x2 matrix is :\n");
    if (det == 0) { printf("Inverse not possible.\n"); return; }
    printf("%8.3f %8.3f\n",  mat[1][1]/det, -mat[0][1]/det);
    printf("%8.3f %8.3f\n", -mat[1][0]/det,  mat[0][0]/det);
}
void magicSquare(int mat[][MAX], int n) {
    int i, j, rowSum, colSum, diag1 = 0, diag2 = 0, magic = 1;
    for (i = 0; i < n; i++) { diag1 += mat[i][i]; diag2 += mat[i][n-1-i]; }
    for (i = 0; i < n; i++) {
        rowSum = 0; colSum = 0;
        for (j = 0; j < n; j++) { rowSum += mat[i][j]; colSum += mat[j][i]; }
        if (rowSum != diag1 || colSum != diag1) magic = 0;
    }
    if (diag2 != diag1) magic = 0;
    printf("\nMagic Square :-\n");
    printf(magic ? "It IS a Magic Square. Constant = %d\n" : "Not a Magic Square.\n", diag1);
}
void main() {
    int a[MAX][MAX], b[MAX][MAX];
    int i, j, r, c;
    printf("Enter rows and cols: "); scanf("%d %d", &r, &c);
    printf("Enter Matrix A:\n");
    for (i = 0; i < r; i++) for (j = 0; j < c; j++) scanf("%d", &a[i][j]);
    printf("Enter Matrix B:\n");
    for (i = 0; i < r; i++) for (j = 0; j < c; j++) scanf("%d", &b[i][j]);
    printf("\nMatrix A:\n"); printMatrix(a, r, c);
    printf("\nMatrix B:\n"); printMatrix(b, r, c);
    addMatrix(a, b, r, c);
    saddlePoint(a, r, c);
    inverseMatrix(a);       
    magicSquare(a, r);
}
