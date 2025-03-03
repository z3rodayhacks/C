#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    FILE* fptr;
    char datatobewritten[50] = "dummytext dummytext dummytext"
                               " Dummytext dummytext";

    fptr = fopen("dummy.txt", "w");  // Corrected variable name
    if (fptr == NULL) {
        printf("This file is not available\n");
        exit(0);
    } else {
        printf("This file is created successfully\n");

        if (strlen(datatobewritten) > 0) {
            fputs(datatobewritten, fptr);
            fputs("\n", fptr);  // Corrected newline escape sequence
        }

        fclose(fptr);
        printf("Data Written Successfully\n");  // More accurate message
    }

    return 0;
}
