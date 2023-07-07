/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#define size 4
void reset(int siz,int *p)
{
    for (int i=0;i<siz;i++)
    {
        p[i]=0;
    }
}

int main()
{
    int arr[size];
    for(int i=0;i<size;i++)
    {
        printf("enter the element :");
        scanf("%d",&arr[i]);
    }
    reset(size,arr);
    for(int i=0;i<size;i++)
    {
        printf("%d",arr[i]);
    }
    

    return 0;
}

