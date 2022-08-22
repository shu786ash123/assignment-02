 #include<stdio.h>
 int main()
 {
    int a = 786,sum=0,x;
    x=a%10;
    sum = sum + x;
    a=a/10;
    x=a%10;
    sum = sum + x;
    a = a/10;
    x = a%10;
    sum = sum + x;
    printf("the sum of given three digit no. is %d",sum);
    return 0;
 }
