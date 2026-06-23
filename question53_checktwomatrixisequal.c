#include<stdio.h>

int main() {
    int r = 2, c = 2;
    int i, j, isEqual = 1;
    
    int mat1[2][2] = {
        {1, 2},
        {3, 4}
    };
    
    int mat2[2][2] = {
        {1, 2},
        {3, 4}
    };
    
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            if(mat1[i][j] != mat2[i][j]) {
                isEqual = 0;
                break;
            }
        }
    }
    
    if(isEqual == 1) {
        printf("Matrices are Equal.\n");
    } else {
        printf("Matrices are NOT Equal.\n");
    }
    
    return 0;
}