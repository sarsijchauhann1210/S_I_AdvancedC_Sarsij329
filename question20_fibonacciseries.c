#include <stdio.h>

int main() {
    int n = 6; 
    int a = 0, b = 1, next, i;

    printf("Fibonacci: ");

    for(i = 1; i <= n; i++) {
        printf("%d ", a); 
        
        next = a + b;     
        a = b;            
        b = next;         
    }
    return 0;
}