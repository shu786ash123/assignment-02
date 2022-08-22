
#include<stdio.h>
int main()
{
    int x,y,z,m;
    printf("enter a three digit number: \n");
    scanf("%d",&x);
    y = x%10;
    z = x/10;
    m = y*100 + z;
    printf("rotatiom of 1 digit in three digit no. %d is %d:  ",x,m);
    return 0;    


}
