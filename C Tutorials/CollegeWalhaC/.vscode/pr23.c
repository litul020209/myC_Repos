#include <stdio.h>
int main()
{
    int x=4,y=0,z;
    while(x>=0){
        if(x==y){
            break;
        }
        else{
            printf("%d %d ",x,y);
            x--;
            y++;
        }
    }


    return 0;
}