#include <stdio.h>
int main()
{
    int n;
    //int m;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        printf("\n");

        for (int j = 1; j <= i; j++)
        {
            printf("%d",j);
            //printf("\n");
        }
    }
}