#include "IOFile.h"
#include <corecrt.h>
#include <stdio.h>


#define FILENAME "out.csv"

int appendToCSV(char *text) {
  FILE *file;
  errno_t err;

  err = fopen_s(&file, FILENAME, "a+");
  if (err != 0) {
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
