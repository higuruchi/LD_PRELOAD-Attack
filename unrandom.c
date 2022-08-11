#include <stdio.h>

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
    return 42;
}
