/*Check if a matrix is symmetric.*/
#include <stdio.h>

int main() {
    int a[10][10], rows, cols, i, j;
    int isSymmetric = 1;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Enter number of columns: ");
    scanf("%d", &cols);

    
    if (rows != cols) {
        printf("Matrix is not symmetric (not a square matrix).\n");
        return 0;
    }

   
    printf("Enter matrix elements:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &a[i][j]);
        }
    }

   
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            if (a[i][j] != a[j][i]) {
                isSymmetric = 0;
                break;
            }
        }
    }

    if (isSymmetric)
        printf("Matrix is symmetric.\n");
    else
        printf("Matrix is not symmetric.\n");

    return 0;
}
