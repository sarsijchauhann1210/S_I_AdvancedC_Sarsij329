#include <stdio.h>

int main() {
    int a, b, temp;
    int *p1 = &a, *p2 = &b; 

    printf("Enter two numbers (a and b): ");
    scanf("%d %d", p1, p2);

   
    temp = *p1; 
    *p1 = *p2;  
    *p2 = temp;

    printf("After swapping: a = %d, b = %d\n",a,b);
    return 0;
}