#include <stdio.h>

void callByValue(int x) {
    x = 100;
}

void callByReference(int *x) {
    *x = 100;
}

int main() {
    int a = 10, b = 10;
    
    callByValue(a);
    printf("a after call by value: %d\n", a);
    
    callByReference(&b);
    printf("b after call by refrence: %d\n", b);
    
    return 0;
}