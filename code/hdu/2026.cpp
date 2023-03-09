#include <ctype.h>
#include <stdio.h>

int main() {
    char t[128] = {' '};
    int i;
    while (gets(t + 1)) {
        for (i = 1; t[i]; i++) {
            putchar(isalpha(t[i]) && t[i-1] == ' ' ? toupper(t[i]) : t[i]);
        }
    }
    return 0;
}