#include <stdio.h>

int main() {
    int arr[5] = {15, 25, 35, 45, 55};
    int key, i, found = 0;
    int *ptr = arr;

    printf("Enter number to search: ");
    scanf("%d", &key);

    for (i = 0; i < 5; i++) {
        if (*(ptr + i) == key) {
            printf("Number %d found at position %d.\n", key, i + 1);
            found = 1;
            break;
        }
    }

    if (found == 0) {
        printf("Number not found in the array.\n");
    }
    return 0;
}