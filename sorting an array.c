/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#define size 5
int main()
{
    int arr[size];
    int c=1;
    for(int i=0;i<size;i++)
    {
        printf("enter the element:");
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<size;i++)
    {   if (arr[i]<arr[i+1])
            c=1;
        if (arr[i]>arr[i+1])
        {  c=0;
           break;
        }
        if (arr[i]==arr[i+1])
        {   c=2;
           break;}
    }if (c==0)
        printf("not sorted");
    if (c==1)
        printf("really sorted");
    if (c==2)
        printf("sorted");

    return 0;
}

