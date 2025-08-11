#include<stdio.h>

int main(){
    int a=101;
    int b=234;
    int c=300;
    int max;
    max = (a < b) ?
            ((a < c) ? a : c) :
            ((b < c) ? b : c);
    printf("%d",max);
    return 0;


    
   
}
    

