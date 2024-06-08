#include <stdio.h>

int main()
{
    FILE *fp;
    int c;
    
    fp = fopen("MYFILE.txt", "r");
    if (fp == NULL) {
        perror("Error opening file");
        return 1;
    }
    
    c = getc(fp);
    while (c != EOF) {
        putchar(c);
        c = getc(fp);
    }
    
    fclose(fp);
    return 0;
}
