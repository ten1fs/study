#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a, const void *b) {
    return abs(*(int*)b) - abs(*(int*)a);
}

int main() {
    int n, i, x[101];
    while (scanf("%d", &n), n) {
        for (i = 0; i < n; i++) {
            scanf("%d", x + i);
        }
        qsort(x, n, sizeof(int), cmp);
        for (i = 0; i < n; i++) {
            printf("%d%c", x[i], (i != n - 1 ? ' ' : '\n'));
        }
    }
    return 0;
}