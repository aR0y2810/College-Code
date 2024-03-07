#include <stdio.h>
#include <string.h>
int main()
{
    char s[20];
    printf ("Enter the string: ");
    scanf ("%s", s);
    int i=0,len=0;
    while (s[i]!='\0' && s[i]!='\n')
    {
        i=i+1;
        ++len;
    }
    printf ("Length of reverse array: %d", len);
    char srev[len];
    i=0;
    while (s[i]!='\0' && s[i]!='\n')
    {
        srev[i]=s[len-i-1];
        i++;
    }
    printf ("\nReverse string: %s", srev);
    if (strcmp(s,srev)==0)
    printf ("\nPalindrome");
    else
    printf ("\nNot Palindrome");
    return 0;
}