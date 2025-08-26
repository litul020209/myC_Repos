#include <stdio.h>
int main()
{

    int n;
    scanf("%d", &n);
    int a = 1;
    int b = 1;
    int sum;

    for (int i = 1; i <= n; i++)

    {
        sum = a + b;
        printf("the value of fibonacci %d no  %d\n", i, sum);
        a = b;
        b = sum;
    }

    return 0;
}