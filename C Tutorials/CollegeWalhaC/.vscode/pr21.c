#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
     int i = 1;
    for (int i = 0;i<=n;)
    {
        printf("%d ",i);

        i++;

        /*if (i % 2 == 0)
        {
          //break;
          //continue;
        }
        printf("%d ",i);*/
    }
    return 0;
}