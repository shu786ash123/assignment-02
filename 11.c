#include<stdio.h>
int main()
{
    int z,x,y;
    printf("ENTER A NUMBER AND A DIGIT: ");
    scanf("%d%d",&x,&y);
    z = x*10+y;
    printf("combination of number and digit is %d",z);
    return 0;

}
