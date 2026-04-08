#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    FILE *fp;
    char text[100];
    char buffer[100];

    /* 1. fopen() - open file for writing */
    fp = fopen("sample.txt", "w");

    if (fp == NULL) {
        printf("Error opening file\n");
        exit(1);
    }

    /* 2. fputs() - write string to file */
    fputs("Hello students\n", fp);
    fputs("Welcome to file handling in C\n", fp);

    /* 3. fwrite() - write binary data */
    strcpy(text, "This line is written using fwrite\n");
    fwrite(text, sizeof(char), strlen(text), fp);

    fclose(fp);

    /* 4. fopen() - open file for reading */
    fp = fopen("sample.txt", "r");

    if (fp == NULL) {
        printf("Error opening file\n");
        exit(1);
    }

    /* 5. fgets() - read line by line */
    while (fgets(buffer, sizeof(buffer), fp) != NULL) {
        printf("%s", buffer);
    }

    /* 6. fseek() - move file pointer to beginning */
    fseek(fp, 0, SEEK_SET);

    printf("\nReading file using fread():\n");

    /* 7. fread() - read entire file */
    while (fread(buffer, sizeof(char), sizeof(buffer), fp) > 0) {
        printf("%s", buffer);
    }

    /* 8. feof() - check end of file */
    if (feof(fp)) {
        printf("\nEnd of file reached\n");
    }

    fclose(fp);

    return 0;
}
