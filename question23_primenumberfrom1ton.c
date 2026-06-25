#include <stdio.h>

int main() {
    int n ;
    int i, j;
scanf("%d",&n);
    for (i = 2; i <= n; i++) {
        
        int divided = 0; 

        for (j = 2; j < i; j++) {
            if (i % j == 0) {
                divided = 1;
            }
        }
        if (divided == 0) {
            printf("%d ", i);
        }
    }

    return 0;
}