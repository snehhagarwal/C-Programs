#include <stdio.h>
int no_ofdigits(int num)
{
    int r=num%10;
    num=num/10;
    if (r==0)
       return 0;
    return 1+ no_ofdigits(num);
}

int main()
{   int num;
    printf("enter the number :");
    scanf("%d",&num);
    int result=no_ofdigits(num);
    printf("the total number of digits in number are %d",result);

    return 0;
}

