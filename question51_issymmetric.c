#include<stdio.h>

int main() {
    int n = 3;
    int i, j, isSymmetric = 1;
    
    int mat[3][3] = {
        {1, 2, 3},
        {2, 4, 5},
        {3, 5, 6}
    };
    
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            if(mat[i][j] != mat[j][i]) {
                isSymmetric = 0;
                break;
            }
        }
    }
    
    if(isSymmetric == 1) {
        printf("The matrix is Symmetric.\n");
    } else {
        printf("The matrix is NOT Symmetric.\n");
    }
    
    return 0;
}