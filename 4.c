#include<stdio.h>
int main()
{
    int a,b;
    printf("enter the two number:  ");
    scanf("%d%d",&a,&b);
    a = a+b;
    b = a-b;
    a = a - b;
    printf("swappin value of teo number is %d and %d",a,b);
    return 0;
}
