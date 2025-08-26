#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    float a=100.00;
    for(int i=1;i<=n;i=i+1){
        printf("%f ",a);
        a=a/2;
       
    }
    
    return 0;
}