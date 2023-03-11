#include <math.h>
#include <stdio.h>


int main() {
    int n, t;
    scanf("%d", &t);
    while (t-- && scanf("%d", &n)) {
        printf("%.0f\n", pow(2, n) + 2);
    }
    return 0;
}