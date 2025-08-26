#include<stdio.h>
int factorial(int n){
    if(n==1) return 1;
    return n*factorial(n-1);
}

    

int main()
{
    int a;
    scanf("%d",&a);
   int fact=factorial(a);
   // for(int i=2;i<=a;i++){
       // fact=fact*i;

   // }
    printf("%d",fact);

    
    return 0;
}