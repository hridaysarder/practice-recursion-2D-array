#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    int primary = 0, secondary = 0;
    for (int i = 0; i < n; i++)
    {
        primary = primary + a[i][i];
    }
    for (int i = 0; i < n; i++)
    {
        secondary = secondary + a[i][n - i - 1];
    }
    int diff = abs(primary - secondary);
    printf("%d", diff);
    return 0;
}