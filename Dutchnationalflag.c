#include<stdio.h>

int main() {
    // Sample Input: N=6
    int n = 6;
    int arr[] = {0, 1, 2, 0, 1, 2};
    int low = 0, mid = 0, high = n - 1, i;
    int temp;
    
    while(mid <= high) {
        switch(arr[mid]) {
            case 0:
                temp = arr[low];
                arr[low] = arr[mid];
                arr[mid] = temp;
                low++; mid++;
                break;
            case 1:
                mid++;
                break;
            case 2:
                temp = arr[mid];
                arr[mid] = arr[high];
                arr[high] = temp;
                high--;
                break;
        }
    }
    
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}