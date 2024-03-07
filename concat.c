#include <Stdio.h>
int main()
{
    char str1[20],str2[20];
    printf ("Enter the string 1:");
    scanf ("%s",&str1);
    printf ("Enter the string 2:");
    scanf ("%s",&str2);
    int i=0,c1=0,c2=0;
    while (str1[i]!='\0')
    { 
        c1++; 
        i++;
    }
    i=0;
    while (str2[i]!='\0')
    { 
        c2++; 
        i++;
    }
    i=0;
    char res[c1+c2];
    while (str1[i]!='\0')
    { 
        res[i]=str1[i];
        i++;
    }
    int j=0;
    while (str2[j]!='\0')
    { 
        res[i]=str2[j];
        i++;
        j++;
    }
    printf ("String concatenated: %s",res);
}