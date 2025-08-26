#include<stdio.h>
int main()
{
    int n;
    printf("enter the number= ");
    scanf("%d",&n);
    if(n>99 && n<1000 && n!=100 )
    {
        printf("the no is three digit no");
    
    }
    else{
        printf("the no is not a three digit no");
        return 0;
    }
}