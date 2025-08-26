#include<stdio.h>
int main()
{
  int l;
  scanf("%d",&l);
  int b;
  scanf("%d",&b);
  int area =l*b;
  int perimeter =2*(l+b);
  if(area>perimeter){
    printf(" %d area is greater",area);
    }
    else{
      printf("perimeter is greater ",perimeter );
    }
  
  return 0;
  }