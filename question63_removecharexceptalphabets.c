#include <stdio.h>

int main() {
    char str[100]="Hello_World2026";
    int i, j = 0;

    for(i = 0; str[i] != '\0'; i++) {
        if((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
            str[j] = str[i];
            j++;
        }
    }
    str[j] = '\0'; 

    printf("String with only alphabets: %s\n", str);
    return 0;
}