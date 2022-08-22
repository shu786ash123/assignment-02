#include<stdio.h>
int main()
{
    int x,a;
    printf("enter a number");
    scanf("%d",&a);
    x = a%10;
    printf("UNIT DIGIT OF A NUMBER- %d last digit is %d",a,x);
    return 0;
}
