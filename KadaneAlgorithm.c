#include <stdio.h>

int main() {
   
    int arr[] = {-2, -3, 4, -1, -2, 1, 5, -3}; 
    int n = 8;
    
    int max_sum = arr[0]; 
    int current_sum = 0;

    for (int i = 0; i < n; i++) {
        current_sum = current_sum + arr[i];
        
        
        if (current_sum > max_sum) {
            max_sum = current_sum;
        }
        
        
        if (current_sum < 0) {
            current_sum = 0;
        }
    }

    printf("Maximum Sum = %d\n", max_sum);
    return 0;
}