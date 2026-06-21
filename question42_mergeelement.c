#include <stdio.h>

int main() 
{
    
    int arr1[] = {1, 2, 3};
    int arr2[] = {4, 5, 6};
    
    int size1 = sizeof(arr1) / sizeof(arr1[0]); 
    int size2 = sizeof(arr2) / sizeof(arr2[0]); 
    
   
   int total_size = size1 + size2;
    
    int arr3[6];

    for (int i = 0; i < total_size; i++) 
    {
        if (i < size1) 
        {
            arr3[i] = arr1[i];
        } 
        else 
        {
            arr3[i] = arr2[i - size1];
        }
    }
    
    printf("New array: ");
    for (int k = 0; k < total_size; k++) {
        printf("%d ", arr3[k]);
    }
    printf("\n");

    return 0;
}
