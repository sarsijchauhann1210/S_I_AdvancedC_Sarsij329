#include <stdio.h>

int main() {
    int arr1[5] = {10, 20, 30, 40, 50};
    int arr2[5], i;
    
    int *ptr1 = arr1;
    int *ptr2 = arr2;

    for (i = 0; i < 5; i++) {
        *(ptr2 + i) = *(ptr1 + i);
    }

    printf("Copied Array (arr2): ");
    for (i = 0; i < 5; i++) {
        printf("%d ", *(ptr2 + i));
    }
    printf("\n");
    return 0;
}