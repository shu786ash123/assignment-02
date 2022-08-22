#include<stdio.h>
int main()
{
    int x,y;
    printf("ENTER A NUMBER:  ");
    scanf("%d",&x);
    y = x/10;
    y=y*10;
    printf(" a number last digit being 0 is %d",y);
    return 0; 
}
