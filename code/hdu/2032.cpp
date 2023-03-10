#include <stdio.h>
#include <string.h>


int main() {
    int i, j, n;
    int arr[32];
    while (scanf("%d", &n) != EOF) {
        memset(arr, 0, sizeof(arr));
        arr[0] = 1;
        for (i = 0; i < n; i++) {
            printf("%d", 1);
            for (j = i; j; j--) {
                arr[j] += arr[j-1];
            }
            for (j = 1; j <= i; j++) {
                printf(" %d", arr[j]);
            }
            putchar('\n');
        }
        putchar('\n');
    }
    return 0;
}