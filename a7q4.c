#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
        if (argc!=3)
        {
                printf ("Incorrect number of arguments");
                return 0;
        }
        FILE *fp1 = fopen(argv[1], "r");
        FILE *fp2 = fopen(argv[2], "r");
        if (fp1 == NULL || fp2 == NULL)
        {
                printf("No file content");
                return 0;
        }
        char c1,c2;
        while ((c1 = fgetc(fp1)) != EOF && (c2 = fgetc(fp2)) != EOF)
        {
                if (c1!=c2)
                {
                        printf ("Mismatch");
                        return 0;
                }
        }
        printf ("Match");
        fclose(fp1);
        fclose(fp2);
        return 1;
}
