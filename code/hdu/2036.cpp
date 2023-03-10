#include <stdio.h>

// 任意多边形面积的计算公式

int main() {
    int x[3], y[3], n;
    double sum;
    while (scanf("%d", &n), n) {
        scanf("%d%d", x, y);
        x[2] = x[0];
        y[2] = y[0];
        sum = 0.0;
        while (--n) {
            scanf("%d%d", x+1, y+1);
            sum += x[0]*y[1] - x[1]*y[0];
            x[0] = x[1];
            y[0] = y[1];
        }
        sum += x[0]*y[2] - x[2]*y[0];
        printf("%.1f\n", sum / 2.0);
    }
    return 0;
}