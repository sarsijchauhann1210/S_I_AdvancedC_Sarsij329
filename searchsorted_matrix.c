#include <stdio.h>

int main() {
    int a[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int target = 5;
    int found = 0;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (a[i][j] == target) {
                printf("Found at (%d,%d)", i, j);
                found = 1;
                break;
            }
        }
        if (found)
            break;
    }

    if (found == 0) {
        printf("Not Found");
    }

    return 0;
}
