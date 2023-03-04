/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a[5],b[5];
    for (int i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    for (int i=0;i<5;i++)
    {
       b[i]=a[i];
    }int *p=b;
    for (int i=0;i<5;i++)
    {
        printf("%d ",*p);
        p++;
    }
    return 0;
}

