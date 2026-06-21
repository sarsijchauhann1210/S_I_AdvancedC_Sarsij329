#include<stdio.h>

int main() {
    int n, original, remainder, result = 0;
    
    printf("Enter a 3-digit integer: ");
    scanf("%d", &n);
    
    original = n;
    
    for(int temp=n;temp!=0;temp=temp/10){
       remainder=temp%10;        
        result+=remainder*remainder*remainder;
        original /= 10;
    }
    
    if(result == n) {
        printf("%d is an Armstrong number.\n", n);
    } else {
        printf("%d is not an Armstrong number.\n", n);
    }
    
    return 0;
}