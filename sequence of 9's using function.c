/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int sequence(int n)
{
    int s=0;
    while(n!=0)
    {
        s=10*s+9;
        n--;
    }return s;
}

int main()
{
    int len,seq;
    scanf("%d",&len);
    seq=sequence(len);
    printf("%d",seq);

    return 0;
}

