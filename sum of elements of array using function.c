/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#define size 4
int arrsum(int si,int *p)
{
    int sum=0;
    for(int i=0;i<size;i++)
    {
        sum+=p[i];
    }return sum;
}

int main()
{
    int arr[size];
    for(int i=0;i<size;i++)
    {
        printf("enter the element:");
        scanf("%d",&arr[i]);
    }int a=arrsum(size,arr);
    printf("the sum of elements is %d",a);

    return 0;
}

