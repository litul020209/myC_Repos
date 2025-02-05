#include<stdio.h>
int main()
{
    float f;
    printf("enter the number :  ");
    scanf("%f",&f);
    int x=(int)f;
    if(f-x==0)
    {
        printf("it is also an integer number");

    }
    else{
        printf("it is not an intger number ");
    }

     

    return 0;
}