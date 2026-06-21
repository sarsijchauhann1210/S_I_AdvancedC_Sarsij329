#include<stdio.h>

int main() {
    int n = 3;
    int mat[3][3];
    int top = 0, bottom = n - 1;
    int left = 0, right = n - 1;
    int num = 1;
    int i, j;
    
    while(top <= bottom && left <= right) {
        for(i = left; i <= right; i++) {
            mat[top][i] = num++;
        }
        top++;
        
        for(i = top; i <= bottom; i++) {
            mat[i][right] = num++;
        }
        right--;
        
        if(top <= bottom) {
            for(i = right; i >= left; i--) {
                mat[bottom][i] = num++;
            }
            bottom--;
        }
        
        if(left <= right) {
            for(i = bottom; i >= top; i--) {
                mat[i][left] = num++;
            }
            left++;
        }
    }
    
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}