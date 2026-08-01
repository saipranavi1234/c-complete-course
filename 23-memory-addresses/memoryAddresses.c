#include <stdio.h>

int main() {
    int num = 25;

    printf("Value = %d\n", num);
    printf("Address = %p\n", (void*)&num);

    return 0;
}