/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int num,s=0;
    scanf("%d",&num);
    for(int i=1;i<=num;i++)
    {
        if(i%3==0 && i%5==0)
            s+=i;
    }printf("%d",s);
    printf("optimised solution");
    for(int i=15;i<=num;i=i+15)
    {
        s+=i;
    }
    return 0;
}

