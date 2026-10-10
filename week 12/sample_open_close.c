#include <stdio.h>

 int main () {

        FILE *fp = fopen("a.txt", "w");

        if (!fp) {
            printf("cannot open the file");
        }
        fprintf(fp, "some text");
        
        fclose(fp);
    
        return 0;
 }
