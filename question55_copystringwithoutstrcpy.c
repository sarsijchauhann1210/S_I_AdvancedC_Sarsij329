#include <stdio.h>

int main() {
    char str1[100], str2[100];
    int i;
    
    printf("Enter the string: ");
    scanf("%s", str1); 
    
    for(i = 0; str1[i] != '\0'; i++) {
        str2[i] = str1[i]; 
    }
    
    str2[i] = '\0';//to stop this copying process
    
    printf("Original String: %s\n", str1);
    printf("Copied String:   %s\n", str2);
    
    return 0;
}