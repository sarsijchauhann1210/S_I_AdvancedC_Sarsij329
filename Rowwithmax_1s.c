#include<stdio.h>

int main() {
    // Sample Input: 3x4 Matrix
    int r = 3, c = 4;
    int mat[3][4] = {
        {0, 1, 1, 1},
        {0, 0, 1, 1},
        {1, 1, 1, 1}
    };
    int i;
    
    int max_row_index = -1;
    int j_index = c - 1; 
    
    for(i = 0; i < r; i++) {
        while(j_index >= 0 && mat[i][j_index] == 1) {
            max_row_index = i + 1; // Expected Output mein 1-based index (Row = 3) hai
            j_index--;
        }
    }
    
    printf("Row = %d\n", max_row_index);
    return 0;
}