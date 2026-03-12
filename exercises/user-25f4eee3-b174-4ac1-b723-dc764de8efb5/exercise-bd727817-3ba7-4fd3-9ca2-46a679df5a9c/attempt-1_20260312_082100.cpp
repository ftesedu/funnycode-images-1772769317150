#include <stdio.h>

int isSphenic(long long n) {
    int distinctPrimeCount = 0;

    for (long long i = 2; i * i <= n; i++) {
        int count = 0;

        while (n % i == 0) {
            n /= i;
            count++;
        }

        if (count > 1) {
            return 0;
        }

        if (count == 1) {
            distinctPrimeCount++;
        }
    }

    if (n > 1) {
        distinctPrimeCount++;
    }

    if (distinctPrimeCount == 3) {
        return 1;
    }

    return 0;
}

int main() {
    long long n;
    scanf("%lld", &n);

    printf("%d", isSphenic(n));

    return 0;
}
