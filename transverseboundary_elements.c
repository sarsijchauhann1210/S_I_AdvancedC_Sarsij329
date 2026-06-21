#include <stdio.h>

int main() {
    int a[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int rows = 3, cols = 3;

    for(int j = 0; j < cols; j++) {
        printf("%d ", a[0][j]);
    }

    for(int i = 1; i < rows; i++) {
        printf("%d ", a[i][cols - 1]);
    }

    for(int j = cols - 2; j >= 0; j--) {
        printf("%d ", a[rows - 1][j]);
    }

    for(int i = rows - 2; i > 0; i--) {
        printf("%d ", a[i][0]);
    }

    return 0;
}

