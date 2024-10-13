#include "io_file.h"
#include <stdio.h>
#include <stdlib.h>


int main() {

    printf("%s\n","string ausgabe");
    char *mytext = NULL;
    int code = readFromFile("out.csv", &mytext);
    printf("return code readFromFile = %d\n",code);
    printf("mytext = %s",mytext);
    return 0;
}
