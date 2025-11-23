/*Perform diagonal traversal of a matrix.
*/
#include <stdio.h>

int main() {
    int a[10][10], rows, cols;
    int i, j, k;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Enter number of columns: ");
    scanf("%d", &cols);

    
    printf("Enter matrix elements:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nDiagonal Traversal:\n");

   
    for (k = 0; k < cols; k++) {
        i = 0;
        j = k;
        while (i < rows && j >= 0) {
            printf("%d ", a[i][j]);
            i++;
            j--;
        }
        printf("\n");
    }

    
    for (k = 1; k < rows; k++) {
        i = k;
        j = cols - 1;
        while (i < rows && j >= 0) {
            printf("%d ", a[i][j]);
            i++;
            j--;
        }
        printf("\n");
    }

    return 0;
}
