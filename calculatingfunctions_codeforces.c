#include <stdio.h>

int main() {
    long long n; // Use long long to handle large values of n
    scanf("%lld", &n);

    if (n % 2 == 0) {
        // If n is even
        printf("%lld\n", n / 2);
    } else {
        // If n is odd
        printf("%lld\n", -(n + 1) / 2);
    }

    return 0;
}
