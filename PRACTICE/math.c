#include<stdio.h>
int main()
{
   int r;
   float pi=3.141;

   printf("enter the radius: ");
   scanf("%d",&r);
   float area=pi*r*r;
   printf("the area of circle is : %f",area);
   return 0;
}
