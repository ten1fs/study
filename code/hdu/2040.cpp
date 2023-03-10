#include <stdio.h>

int f(int n) {
    int i, sum = 1;
    for (i = 2; i <= n / 2; i++) {
        if (n % i == 0) {
            sum += i;
        }
    }
    return sum;
}

int main() {
    int n, a, b;
    scanf("%d", &n);
    while (n-- && scanf("%d%d", &a, &b)) {
        puts(f(a) == b && f(b) == a ? "YES" : "NO");
    }
    return 0;
}