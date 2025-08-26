#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a=1;
    for(int i=1;i<=n;i=i+1){
        printf("%d ",a);
        a=a*4;
    }
    return 0;
}