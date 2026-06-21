#include<stdio.h>

int main() {
    int n, sum = 0, remainder, temp;
    
    printf("Enter an integer: ");
    scanf("%d", &n);
    
    for(temp = n; temp != 0; temp = temp / 10) {
        remainder = temp % 10;
        sum = sum + remainder;
    }
    
    printf("Sum of digits = %d\n", sum);
    return 0;
}