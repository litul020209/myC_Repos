#include<stdio.h>
int main()
{

    int n;
    scanf("%d",&n);
    int sum=0;
    int last=0;
    while(n!=0){
        last=n%10;
        sum=sum+last;
        n=n/10;

    }
    printf("sum of the digit = %d",sum);

    return 0;
}