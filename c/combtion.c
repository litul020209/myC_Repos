#include<stdio.h>
int factorial(int x){
    int fact=1;
    for(int i=2;i<=x;i++){
        fact=fact*1;
    }
    return fact;
}

int main()
{
    int n;
    scanf("%d",&n);
    int ncr=factorial(n);

   /*/ int r ;
    scanf("%d",&r); 
    int ncr;


    ncr = factorial(n)/(factorial(r)*factorial(n-r));*/
      printf("%d",ncr);
    
    return 0;
}