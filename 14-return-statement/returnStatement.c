#include <stdio.h>

int square(int n) {
    return n * n;
}

int main() {
    int num = 6;

    printf("Square = %d\n", square(num));

    return 0;
}