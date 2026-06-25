#include <stdio.h>

int main() {
    int arr1[3] = {1, 2, 3};
    int arr2[3] = {7, 8, 9};
    int i, temp;
    
    int *p1 = arr1;
    int *p2 = arr2;

    
    for (i = 0; i < 3; i++) {
        temp = *(p1 + i);
        *(p1 + i) = *(p2 + i);
        *(p2 + i) = temp;
    }

    printf("arr1 after swap: %d %d %d\n", arr1[0], arr1[1], arr1[2]);
    printf("arr2 after swap: %d %d %d\n", arr2[0], arr2[1], arr2[2]);
    
    return 0;
}