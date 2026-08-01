#include <stdio.h>

int main() {
    char name[30], place[30], animal[30];

    printf("Enter your name: ");
    scanf("%s", name);

    printf("Enter a place: ");
    scanf("%s", place);

    printf("Enter an animal: ");
    scanf("%s", animal);

    printf("\n%s went to %s and saw a %s.\n", name, place, animal);

    return 0;
}