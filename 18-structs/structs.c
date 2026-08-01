#include <stdio.h>

struct Student {
    char name[30];
    int age;
    float marks;
};

int main() {
    struct Student s = {"Pranavi", 21, 92.5};

    printf("Name: %s\n", s.name);
    printf("Age: %d\n", s.age);
    printf("Marks: %.2f\n", s.marks);

    return 0;
}