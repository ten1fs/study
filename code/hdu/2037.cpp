#include <stdio.h>
#include <stdlib.h>

struct c {
    int x;
    int y;
    int ord;
} d[100];

int cmp(const void *a, const void *b) {
    if ((*(struct c*)a).x == (*(struct c*)b).x) {
        return (*(struct c*)a).y - (*(struct c*)b).y;
    } else {
        return (*(struct c*)a).x - (*(struct c*)b).x;
    }
}


int main() {
    int i, j, n, max;
    while (scanf("%d", &n), n) {
        for (max = i = 0; i < n; i++) {
            scanf("%d%d", &d[i].x, &d[i].y);
            d[i].ord = 1;
        }
        qsort(d, n, sizeof(struct c), cmp);
        d[n-1].ord = 1;
        for (i = n - 2; i >= 0; i--) {
            for (j = i + 1; j < n; j++) {
                if (d[i].y <= d[j].x && d[i].ord < d[j].ord + 1) {
                    d[i].ord = d[j].ord + 1;
                }
            }
            if (max < d[i].ord) {
                max = d[i].ord;
            }
        }
        printf("%d\n", max);
    }
    return 0;
}