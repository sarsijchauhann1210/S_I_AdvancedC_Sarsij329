#include <stdio.h>

int main() {
    int arr[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int size = 9;
    
    int max_sum = arr[0]; 
    int current_sum = 0;   
    int i;

    for(i = 0; i < size; i++) {
        current_sum += arr[i]; 
        if(current_sum > max_sum) {
            max_sum = current_sum;
        }

        if(current_sum < 0) {
            current_sum = 0;
        }
    }

    printf("Maximum Subarray Sum: %d\n", max_sum);
    return 0;
}