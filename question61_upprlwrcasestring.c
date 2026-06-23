#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    
    printf("Enter a string: ");
    scanf("%s", str); 
    
    // Direct in-built function se uppercase
    strupr(str);
    printf("Uppercase string: %s\n", str);
    
    // Direct in-built function se lowercase
    strlwr(str);
    printf("Lowercase string: %s\n", str);
    
    return 0;
}