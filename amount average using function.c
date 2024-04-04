
#include <stdio.h>
float max(int num,int digit)
{   int r,c=0,s=0;
    float avg;
    while(num!=0)
    {
        r=num%10;
        if (r<digit)
        {
            c+=1;
            s+=r;
        }num=num/10;
    }avg=s/c;
    return c,avg;
}

int main()
{  
    int num,digit,totalnumber;
    float average;
    scanf("%d%d",&num,&digit);
    totalnumber,average=max(num,digit);
    printf("%d\n%f",totalnumber,average);
    return 0;}

