/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int grade1,grade2;
    scanf("%d%d",&grade1,&grade2);
    int *p;
    int *q;
    p= &grade1;
    q= &grade2;
    printf("the value is %d\n",*p);
    printf("the address is %p\n",p);
    printf("the value is %d\n",*q);
    printf("the address is %p\n",q);

    return 0;
}

