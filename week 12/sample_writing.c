#include <stdio.h>

    int main () {

        FILE *fp = fopen("a.txt", "r");

        if (!fp) {
            printf("cannot open the file");
        }

        //int x=100;
        //fprintf(fp, "value = %d", x);
        //fputs("Hello",fp);
        //putc('s', fp);
        
        //fclose(fp);

        printf("ftell=%d\n", ftell(fp));

        fseek (fp, -20, SEEK_END);
        printf ("ftell =%d\n", ftell (fp));
        printf("getc =%c\n",getc (fp));
       
        return 0;
    }