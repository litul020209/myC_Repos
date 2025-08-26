#include <stdio.h>
int main()
{
    int x, y;
    scanf("%d%d", &x, &y);

    if (x == 0 && y == 0)
    {
        printf("point at the origin");
    }
    else if (x == 0 && y != 0)
    {
        printf("point at in y axis");
    }
    else if(x!=0 && y==0)
    {
        printf("point at x axis ");
    }
    else{
        printf("point in space");
    }
    return 0;
}