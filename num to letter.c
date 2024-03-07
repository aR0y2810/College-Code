#include <stdio.h>
main()
{
    int n, c=0;
    printf ("Enter the value of n");
    scanf ("%d",&n);
    int copy1=n, copy2=n;
    while (n>0)
    {
        c++;
        n/=10;
    }
    int arr[c];
    int i=0;
    while (copy1>0)
    {
        arr[i++]=copy1%10;
        copy1/=10;
    }
    for (i=c-1; i>=0;i--)
    {
        switch (arr[i])
        {
            case 1:
            printf ("One ");
            break;
            case 2:
            printf ("Two ");
            break;
            case 3:
            printf ("Three ");
            break;
            case 4:
            printf ("Four ");
            break;
            case 5:
            printf ("Five ");
            break;
            case 6:
            printf ("Six ");
            break;
            case 7:
            printf ("Seven ");
            break;
            case 8:
            printf ("Eight ");
            break;
            case 9:
            printf ("Nine ");
            break;
            case 0:
            printf ("Zero ");
            break;
        }
    }
}