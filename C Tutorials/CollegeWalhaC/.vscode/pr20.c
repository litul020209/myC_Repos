#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    //int a = 0;
    for (int i = 2; i <= n - 1; i++)
    {
        
            
        
        if (n % i == 0)
        {
            printf("THE NO IS COMPOSITE NO");
            //a = 1;
            break;
        }
        else{
            printf("the no is prime no");
            break;
        }
    }
    return 0;
}