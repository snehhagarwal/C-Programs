/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int sumofdivisor(int num)
{
    int n=0;
    for(int i=1;i<=num;i++)
    {
        if (num%i==0)
           n+=i;
    }return n;
}

int main()
{
    int num,a;
    printf("enter the number:");
    scanf("%d",&num);
    a=sumofdivisor(num);
    printf("the sum of the divisors is : %d",a);
    return 0;
}

