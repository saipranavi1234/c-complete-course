#include <stdio.h>

int main() {
    FILE *fp;

    fp = fopen("sample.txt", "w");

    if(fp == NULL) {
        printf("File could not be opened.\n");
        return 1;
    }

    fprintf(fp, "Hello, File Handling in C!");

    fclose(fp);

    printf("Data written successfully.\n");

    return 0;
}