#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
    FILE *fp1, *fp2;
    char c;

    fp1 = fopen("MYFILE.txt", "r");
    fp2 = fopen("newMYFILE.txt", "w");

    if (fp1 == NULL) {
        printf("Cannot open file for reading\n");
        exit(1);
    } else if (fp2 == NULL) {
        printf("Cannot open new file for writing\n");
        fclose(fp1); // Açık dosyayı kapat
        exit(1);
    } else {
        c = getc(fp1);
        while (c != EOF) {
            if (isupper(c)) {
                c = tolower(c);
            }
            putc(c, fp2);
            c = getc(fp1);
        }
        fclose(fp1);
        fclose(fp2);
        printf("Files successfully copied..\n");
    }

    return 0;
}
