#include <stdio.h>
#include <string.h>


void n2r(int n, int r) {
    if (n) {
        n2r(n / r, r);
        printf("%c", n % r > 9 ? n % r - 10 + 'A' : n % r + '0');
    }
}


int main() {
    int n, r;
    while (scanf("%d%d", &n, &r) != EOF) {
        if (n > 0) {
            n2r(n, r);
        } else if (!n) {
            putchar('0');
        } else {
            putchar('-');
            n2r(-n, r);
        }
        putchar('\n');
    }
    return 0;
}