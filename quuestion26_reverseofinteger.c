#include<stdio.h>

int main() {
    int n, reversed = 0, remainder, temp;
    
    printf("Enter an integer: ");
    scanf("%d", &n);
    
    for(temp = n; temp != 0; temp = temp / 10) {
        remainder = temp % 10;
        reversed = reversed * 10 + remainder;
    }
    
    printf("Reversed number = %d\n", reversed);
    return 0;
}