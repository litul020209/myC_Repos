#include<stdio.h>
/*void ind(){
    printf("haloo");
    return;*/
    

int main()
{
    int a;
    scanf("%d",&a);
    int fact=1;
    for(int i=2;i<=a;i++){
        fact=fact*i;

    }
    printf("%d",fact);
    
    return 0;
}