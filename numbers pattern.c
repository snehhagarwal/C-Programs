/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n,s=1;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;i>=j;j++)
        {
            printf("%d",s);
            s+=1;
        }printf("\n");
    }

    return 0;
}

