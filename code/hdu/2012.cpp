#include <stdio.h>

// 打表
// int x[90] = {0};
// bool f(int num) {
//     if (num <= 1) {
//         return false;
//     }
//     for (int i = 2; i < num; i++) {
//         if (num % i == 0) {
//             return false;
//         }
//     }
//     return true;
// }
// int main() {
//     int t = 0;
//     for (int i = -39; i <= 50; i++) {
//         x[t++] = f(i*i+i+41) ? 1 : 0;
//     }
//     for (int i = 0; i < 90; i++) {
//         if (i != 89) {
//             printf("%d, ", x[i]);
//         } else {
//             printf("%d", x[i]);
//         }
//     }
//     return 0;
// }

int main() {
    int m, n;
    int x[] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 1, 1, 0, 1, 1, 1, 1, 0, 1};
    while (scanf("%d%d", &m, &n), m || n) {
        for (m += 39, n += 39; x[m] && m <= n; m++);
        puts(m > n ? "OK" : "Sorry");
    }
    return 0;
}