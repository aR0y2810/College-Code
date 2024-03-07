#include <stdio.h>
main()
{
    char s[20];
    printf ("Enter the string: ");
    scanf ("%s",s);
    int i=0;
    while (s[i]!='\0')
    {
        if (s[i]>=97 && s[i]<=123)
        s[i]=s[i]-32;
        i++;
    }
    printf ("Capitalised string: %s",s);
}