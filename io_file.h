#ifndef IO_FILE_H
#define IO_FILE_H
#include "stdio.h"
int appendToFile(char *filename, char *text);
int readFromFile(char *filename, char **text);
#endif
