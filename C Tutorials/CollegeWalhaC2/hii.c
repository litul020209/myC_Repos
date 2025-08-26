#include <stdio.h>

int main()
{
    int n;
    int r;
    int nfact = 1;
    int rfact = 1;
    int minus = 1;
    scanf("%d%d", &n, &r);

    for (int i = 1; i <= n; i++)
    {
        nfact = nfact * i;
    }
    for (int j = 1; j <= r; j++)
    {
        rfact = rfact * j;
    }
    for (int k = 1; k <= (n - r); k++)
    {
        minus = minus * k;
    }
    int fact = nfact / (rfact * minus);
    printf("%d", fact);

    return 0;
}