#include <stdio.h>

int main() {
    int size, i, j, k;
    printf("Enter the size of the square matrices: ");  
    scanf("%d", &size);
    int a[size][size], b[size][size], result[size][size];

    // Input first matrix
    printf("Enter elements of first matrix:\n");
    for (i = 0; i < size; i++) {
        for (j = 0; j < size; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter elements of second matrix:\n");
    for (i = 0; i < size; i++) {
        for (j = 0; j < size; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    for ( i = 0; i < size  ; i++)
    {
        for ( j = 0; j < size ; j++)
        {
            result[i][j] = 0;
            for ( k = 0; k < size ; k++)
            {
                result[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    

  

    // Display result
    printf("\nResultant Matrix:\n");
    for (i = 0; i < size; i++) {
        for (j = 0; j < size; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}