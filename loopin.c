#include <stdio.h>
main()
{
    int m,n;
    printf ("Enter the number of rows: ");
    scanf ("%d",&m);
    printf ("Enter the number of columns: ");
    scanf ("%d",&n);
    int a[m][n];
    for (int i=0; i<m; i++)
    {
        for (int j=0; j<n; j++)
            scanf ("%d",a[i][j]);
    }
}