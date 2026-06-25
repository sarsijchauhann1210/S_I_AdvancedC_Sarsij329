#include <stdio.h>

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int *start = arr;         
    int *end = arr + 4;       
    int temp, i;

   
    while (start < end) {
   
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;  
    }

    printf("Reversed Array: ");
    for (i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}