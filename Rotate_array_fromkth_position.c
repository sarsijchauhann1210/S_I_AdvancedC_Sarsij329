#include<stdio.h>

int main() {
    int n, k, i;
    scanf("%d %d", &n, &k);
    
    int arr[n];
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    k = k % n; 
    int temp[n];
    
    for(i = 0; i < n; i++) {
        temp[(i + k) % n] = arr[i];
    }
    
    for(i = 0; i < n; i++) {
        printf("%d ", temp[i]);
    }
    printf("\n");
    
    return 0;
}