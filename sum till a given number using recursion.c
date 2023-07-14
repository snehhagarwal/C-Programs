#include <stdio.h>
int sumupto(int num)
{
    if (num==1)
        return 1;
    return num+sumupto(num-1);
}

int main()
{
    int num;
    printf("enter the number : ");
    scanf("%d",&num);
    int result=sumupto(num);
    printf("the result is %d",result);

    return 0;
}

