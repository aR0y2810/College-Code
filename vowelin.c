#include <Stdio.h>
main()
{
    char s[20];
    printf ("Enter the string:");
    scanf ("%s",s);
    int i=0, c1=0, c2=0, c3=0, c4=0, c5=0;
    while (s[i]!='\0')
    {
        if (s[i]=='a' || s[i]=='A')
        c1++;
        else if (s[i]=='e' || s[i]=='E')
        c2++;
        else if (s[i]=='i' || s[i]=='I')
        c3++;
        else if (s[i]=='o' || s[i]=='O')
        c4++;
        else if (s[i]=='u' || s[i]=='U')
        c5++;
        i++;
    }
    printf ("Number of vowel 'a': %d",c1);
    printf ("\nNumber of vowel 'e': %d",c2);
    printf ("\nNumber of vowel 'i': %d",c3);
    printf ("\nNumber of vowel 'o': %d",c4);
    printf ("\nNumber of vowel 'u': %d",c5);
}