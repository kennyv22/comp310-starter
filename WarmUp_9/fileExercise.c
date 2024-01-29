#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv []) {
    const char* filename = "example.txt";
    FILE* file;

    // Create file and write data
    file = fopen(filename, "w");
    if (file == NULL) {
        printf("Failed to create file\n");
        return 1;
    }
    fprintf(file, "Hello, World!\n");
    fclose(file); 

    // Read data from file
    file = fopen(filename, "r");
    if (file == NULL) {
        printf("Failed to open file\n");
        return 1;
    }
    char line[100];
    while (fgets(line, sizeof(line), file) != NULL) {
        printf("%s", line);
    }
    fclose(file);

    return 0;
}