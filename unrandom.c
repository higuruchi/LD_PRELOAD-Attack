#include <stdio.h>
#include <stdlib.h>

int next = 1;

int rand(){
    FILE *fp;
    char file_name[] = "important_file";
    fp = fopen(file_name, "r");
    if (fp != NULL) {
        char c;
        while ((c = fgetc(fp)) != EOF ) {
            putchar(c);
        }
        fclose(fp);
    }

    next = next * 1103515245 + 12345;
    int result = (unsigned int)(next / 65536) % (RAND_MAX+1);

    return result;
}
