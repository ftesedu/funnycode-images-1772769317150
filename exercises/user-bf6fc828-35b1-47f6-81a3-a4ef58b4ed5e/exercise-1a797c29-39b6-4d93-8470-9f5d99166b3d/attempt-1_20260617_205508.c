#include <stdio.h>
#include <stdlib.h>

int fi(int n) {
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        return fi(n - 1) + fi(n - 2);
    }
}

int main() {
    int n;
    scanf("%d", &n);
    printf("Gia tri thu %d cua chuoi Fibonacci la: %d", n, fi(n));
    return 0;
}