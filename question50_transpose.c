#include<stdio.h>

int main() {
    int r = 2, c = 3;
    int i, j;
    
    int mat[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };
    
    int transpose[3][2];
    
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            transpose[j][i] = mat[i][j];
        }
    }
    
    printf("Transposed Matrix:\n");
    for(i = 0; i < c; i++) { 
        for(j = 0; j < r; j++) {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}