#include <stdio.h>
int main()
{
    int x1, y1;
    printf("enter x1 and y1=");
    scanf("%d%d", &x1, &y1);
    int x2, y2;
    printf("enter x2,y2=");
    scanf("%d%d", &x2, &y2);
    int x3, y3;
    printf("enter x3 and y3=");
    scanf("%d%d", &x3, &y3);
    int m1 = (y2 - y1) / (x2 - x1);
    int m2 = (y3 - y2) / (x3 - x2);
    if (m1 = m2)
    {
        printf("3 points fall on one straight line ");
    }
    else
    {
        printf("3 points not fall in one straight line");
    }

    return 0;
}