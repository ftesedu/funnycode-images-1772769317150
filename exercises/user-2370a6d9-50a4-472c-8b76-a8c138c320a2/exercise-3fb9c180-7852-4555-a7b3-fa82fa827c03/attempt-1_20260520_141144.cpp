#include <stdio.h>

int main() {
    char f[] = "morning";
    int i = 0;
    while (f[i] != 'n') {
        printf("%c%c", f[i], f[i + 1]);
        i++;
    }
    return 0;
}

