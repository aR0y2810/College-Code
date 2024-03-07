#include <Stdio.h>
int main()
{
    char str1[20],str2[20];
    printf ("Enter the string 1:");
    scanf ("%s",&str1);
    printf ("Enter the string 1:");
    scanf ("%s",&str2);
    int i=0;
    while (str1[i]!='\0' && str2[i]!='\0') 
    {
        if (str1[i]!=str2[i])
        {
            printf ("Unequal Strings");
            return 0;
        }
        i++;
    }  
    printf ("Equal Strings");
}