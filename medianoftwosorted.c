#include <stdio.h>

int main() {
    int a[] = {1, 3};
    int b[] = {2};
    
    int c[10];
    int n1 = 2, n2 = 1;

    for(int i = 0; i < n1; i++) {
        c[i] = a[i];
    }

    for(int i = 0; i < n2; i++) {
        c[n1 + i] = b[i];
    }

    int n = n1 + n2;

    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - i - 1; j++) {
            if(c[j] > c[j + 1]) {
                int temp = c[j];
                c[j] = c[j + 1];
                c[j + 1] = temp;
            }
        }
    }

    if(n % 2 == 0)
        printf("Median = %.1f", (c[n/2] + c[n/2 - 1]) / 2.0);
    else
        printf("Median = %d", c[n/2]);

    return 0;
}
