#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    if(a%3==0 && a%5==0){
        if(a%15!=0){
            printf("the no is not divisible by 15");
        }
        else{
             
             
        }
    
        
      
    }
    else{
        printf("not divisible by 3,5 and 15");
        return 0;
    }
}