#include<stdio.h>

int main() {
    int n, rem, sum = 0, i, fact, temp;
    
    printf("Enter a number: ");
    scanf("%d", &n);
    
    for(temp = n; temp > 0; temp = temp / 10) {
        rem = temp % 10;
        fact = 1;
        
        for(i = 1; i <= rem; i++) {
            fact = fact * i;
        }
        
        sum = sum + fact;
    }
    
    if(sum == n) {
        printf("%d is a Strong number.\n", n);
    } else {
        printf("%d is not a Strong number.\n", n);
    }
    
    return 0;
}