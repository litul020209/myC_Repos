#include <stdio.h>
int main()
{

    int n;
    scanf("%d", &n);
    int num = 0;
    // int last = 0;
    while (n > 0)
    {
        num = num + (n % 10);
        // last = n % 10;

        n = n / 10;
        num = (num * 10);
    }
    printf("num of the digit = %d", num);

    return 0;
}