#include <stdio.h>

int ans(int n, int m) {
    if (m == 0) {
        return 1;
    }
    if (m & 1) {
        return (ans(n, m / 2) * ans(n, m / 2) * (n % 1000)) % 1000;
    }
    return (ans(n, m / 2) * ans(n, m / 2)) % 1000;
}

int main() {
    int n, m;
    while (scanf("%d%d", &n, &m), n+m) {
        printf("%d\n", ans(n, m));
    }
    return 0;
}