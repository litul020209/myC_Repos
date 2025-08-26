#include <stdio.h>
int main()
{
    int n;
    int m;
    scanf("%d%d", &n,&m);
    for (int i = 1; i <= n; i++)
    {
        printf("\n");

        for (int i = 1; i <= m; i++)
        {
            printf("%d",i);
            //printf("\n");
        }
    }
}