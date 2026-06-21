#include <stdio.h>

int main() {
    int arr[] = {16, 17, 4, 3, 5, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    int leader = arr[n - 1];

    printf("Leaders are: %d ", leader);

    for (int i = n - 2; i >= 0; i--) {
        if (arr[i] >= leader) {
            printf("%d ", arr[i]);
            leader = arr[i];
        }
    }

    return 0;
}
