#include<stdio.h>
int main()
{
    int x,a;
    printf("ENTER A NUMBER ");
    scanf("%d",&a);
    x = a/10;
    printf("NUMBER-%d without last digit is %d",a,x);
    return 0;
    
}
