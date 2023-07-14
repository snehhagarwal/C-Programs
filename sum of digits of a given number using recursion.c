#include <stdio.h>
int sum(int num)
{   if (num<=9)
        return num;
    int r=num%10;
    num=num/10;
    return r+sum(num);
}
int main()
{
    int num;
    printf("enter the number:");
    scanf("%d",&num);
    int result=sum(num);
    printf("the sum of the digits of a number is %d",result);

    return 0;
}

