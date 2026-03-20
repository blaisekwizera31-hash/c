#include <stdio.h>

int sumDigits(int n) {
    if (n == 0)
        return 0;
    else
        return (n % 10) + sumDigits(n / 10);
}

int main() {
    int num;

    printf("Sum of digits = %d\n", sumDigits(234));

    return 0;
}
