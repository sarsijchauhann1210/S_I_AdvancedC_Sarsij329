#include <stdio.h>

int main() {
    int num ;
    int i;
    int divided = 0; 
scanf("%d",&num);
    for (i = 2; i < num; i++) {
        if (num % i == 0) {
            divided = 1;
        }
    }

    if (divided == 0) {
        printf("its a  Prime number\n");
    } else {
        printf("its not a Prime number\n");
    }

    return 0;
}