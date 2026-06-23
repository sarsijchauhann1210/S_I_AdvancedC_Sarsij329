#include <stdio.h>

int main() {
    int arr[100];
    int size, i, element, pos;

   
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    printf("Enter %d elements:\n", size);
    for(i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to insert: ");
    scanf("%d", &element);

    printf("Enter the position (1 to %d): ", size + 1);
    scanf("%d", &pos);


    for(i = size - 1; i >= pos - 1; i--) {
        arr[i + 1] = arr[i];
    }

    arr[pos - 1] = element; 
    
    size++; 

    printf("Array after insertion: ");
    for(i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}