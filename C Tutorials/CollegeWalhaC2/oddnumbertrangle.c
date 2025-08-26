#include <stdio.h>
int main()
{
    int n;
    // int m;
    scanf("%d", &n);
    for (int i = 1 ; i <= n; i++)
    {
        printf("\n");
        int a = 1;
        //a=a+2;

        for (int j = 1; j <= n; j++)
        {
            printf("%d",a);
            
        }
        a=a+2;
        
    }
}
