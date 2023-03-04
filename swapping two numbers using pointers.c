/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a=5,b=10;
    int *p,*q;
    a=a+b;
    b=a-b;
    a=a-b;
    p=&a;
    q=&b;
    printf("%d %d",*p,*q);

    return 0;
}

