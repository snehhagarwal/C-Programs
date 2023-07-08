
#include <stdio.h>
void greatno()
{
    int n,s=0,r,k;
    scanf("%d",&n);
    k=n;
    while(k!=0)
    {
        r=r%10;
        k=k/10;
        s+=1;
    }if (s==2)
    {
        r=n%10;
        n=n/10;
        if (r>n)
           printf("the maximum number is : %d",r);
        else
           printf("the maximum number is : %d",n);  
    }else
        printf("error! not a 2 digit number");
}

int main()
{
    greatno();
    return 0;
}

