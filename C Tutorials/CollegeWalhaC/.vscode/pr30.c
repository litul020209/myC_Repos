#include <stdio.h>
int main()
{
    int n;
    printf("the no is=");
    scanf("%d",&n);
    int sum=0;
    int last=0;
    while(n>=0){
        last=n%10;
        if(last%2==0){
            sum=sum+last;
        }
        n=n/10;
    }
    printf("the sumof the even digit is %d",sum);

    return 0;
}