#include <stdio.h>

int main() {
    FILE *fp;
    char text[100];

    fp = fopen("sample.txt", "r");

    if(fp == NULL) {
        printf("File not found.\n");
        return 1;
    }

    fgets(text, sizeof(text), fp);

    printf("File Content: %s\n", text);

    fclose(fp);

    return 0;
}