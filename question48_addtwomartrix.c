#include<stdio.h>

int main() {
    int r = 2, c = 2;
    int i, j;
    
    int mat1[2][2] = {{1, 2},{3, 4}};
    
    int mat2[2][2] = {{5, 6},{7, 8}};
    
    int sum[2][2];
    
    printf("Sum of matrices:\n");
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            sum[i][j] = mat1[i][j] + mat2[i][j];
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}