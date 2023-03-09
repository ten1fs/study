#include <stdio.h>

typedef unsigned long ul;

ul gcd(ul u, ul v) {
    int rem = u % v;
    while (rem) {
        u = v;
        v = rem;
        rem = u % v;
    }
    return v;
}

ul lcm(ul u, ul v) {
    return u * v / gcd(u, v);
}

int main() {
    int n;
    ul u, res;
    while (scanf("%d", &n) != EOF) {
        res = 1;
        while (n--) {
            scanf("%lu", &u);
            res = lcm(res, u);
        }
        printf("%lu\n", res);
    }
    return 0;
}