#include <stdio.h>

int main() {
    int num = 100;
    int *ptr = &num;

    printf("Pointer Address = %p\n", (void*)ptr);
    printf("Dereferenced Value = %d\n", *ptr);

    return 0;
}