#include "io_file.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int appendToFile(char *filename, char* text){
    FILE *file;

    file = fopen(filename, "a+");
    if (file == NULL) {
        // Handle error, err contains the error code
        perror("fopen_s");
        return -1;
    }

    // Write to the file
    if (fputs(text, file) == EOF) {
        perror("fputs");
        fclose(file);
        return -1;
    }

    // Close the file
    if (fclose(file) != 0) {
        perror("fclose");
        return -1;
    }

    return 0;
}

int readFromFile(char *filename, char **text) {
    FILE *file;
    file = fopen(filename, "r");
    if (file == NULL) {
        // Handle error, err contains the error code
        perror("fopen_s");
        return -1;
    }  

    // get file size to determine buffersize
    fseek(file, 0, SEEK_END);
    long filesize = ftell(file);
    fseek(file, 0, SEEK_SET);  // Return to the start of the file

    // dynamically allocate memory for the buffer
    *text = (char *)malloc(filesize + 1);
    if (*text == NULL) {
        perror("Failed to allocate memory");
        fclose(file);
        return -1;
    }

    //read file into buffer
    fread(*text, 1, filesize, file);
    *text[filesize] = '\0';  // Null-terminate the string

    // Close the file
    if (fclose(file) != 0) {
        perror("fclose");
        return -1;
    }

    return 0;
}
