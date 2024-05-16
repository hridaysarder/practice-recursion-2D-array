
// without function

// #include <stdio.h>
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     int a[n];
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &a[i]);
//     }
//     int sum = 0;
//     for (int i = 0; i < n; i++)
//     {
//         sum = sum + a[i];
//     }
//     printf("%d", sum);
//     return 0;
// }

// with function and recursion

#include <stdio.h>
long long int fun(int a[], int n, int i)
{
    if (i == n)
        return 0;
    long long int sum = fun(a, n, i + 1);
    return sum + a[i];
}
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    long long int result = fun(a, n, 0);
    printf("%lld\n", result);
    return 0;
}