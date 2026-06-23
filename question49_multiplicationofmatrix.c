#include<stdio.h>

int main() {
    int n = 2;
    int i, j, k;
    
    int mat1[2][2] = {
        {1, 2},
        {3, 4}
    };
    
    int mat2[2][2] = {
        {2, 0},
        {1, 2}
    };
    
    int result[2][2];
    
    printf("Multiplication of matrices:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            result[i][j] = 0;
            
            for(k = 0; k < n; k++) {
                result[i][j] = result[i][j] + (mat1[i][k] * mat2[k][j]);
            }
            
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}