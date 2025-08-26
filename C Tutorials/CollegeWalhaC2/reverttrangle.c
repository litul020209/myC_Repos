#include <stdio.h>
int main()
{
    int n;
    //int m;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        printf("\n");

        for (int j = n; i <= j; j--)
        {
            printf("*");
            //printf("\n");
        }
    }
}