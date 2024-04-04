#include <stdio.h> 
#include <stdlib.h> 
int main() 
{ 
   FILE *fp1 = fopen("file1.txt", "r"); 
   FILE *fp2 = fopen("file2.txt", "w"); 

   if (fp1 == NULL) 
   { 
        printf("No file content"); 
        return 0;
   } 
   int c;
   while ((c = fgetc(fp1)) != EOF) 
        fputc(c, fp2); 
   fclose(fp1); 
   fclose(fp2);
   return 0; 
} 