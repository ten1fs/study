#include <stdio.h>
#include <math.h>

  int main() {
    int n;
    while (scanf("%d", &n) != EOF) {
        printf("%.0f\n", 3 * pow(2, n - 1) - 2);
    }
    return 0;
  }