#include<stdio.h>
int main()
{
    int a,b,c;
    printf("ENTER TWO NUMBERS:   ");
    scanf("%d%d",&a,&b);
    c=a;
    a=b;
    b=c;
    printf("swapping value using third variable is  %d and %d ",a,b);
    return 0;

}
