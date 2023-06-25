/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int isEven(int n)
{
    if (n%2==0)
        return 1;
    else
        return 0;
}

int main()
{
    int n,k;
    scanf("%d",&n);
    k=isEven(n);
    if (k==1)
        printf("the number is even");
    else 
        printf("the number is odd");
    return 0;
}

