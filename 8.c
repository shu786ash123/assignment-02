   #include<stdio.h>
   int main()
   {
    int result,x;
    printf("enter a number");
    scanf("%d",&x);
    result = x&1;
    if(result==1)
        printf("odd");
        else 
            printf("even");
            return 0;
   }
