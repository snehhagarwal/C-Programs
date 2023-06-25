/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int factorial(int n)
{
    int s=1;
    if (n>0)
    {
       for (int i=1;i<=n;i++)
           s=s*i;
    }else 
        s=-1;
    return s;
}

int main()
{
    int num,k  ;
    printf("enter the number whose factorial is to be found:");
    scanf("%d",&num);
    k=factorial(num);
    printf("the factorial of the number is: %d",k);

    return 0;
}

