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
    for(int i=0;i<size;i++)
    {
        printf("enter the element:");
        scanf("%d",&arr[i]);
    }int max=arr[0]+arr[1];
    for(int i=1;i<size;i++)
    {
        if (max<arr[i]+arr[i+1])
            max=arr[i]+arr[i+1];
    }printf("the sum of max neighbours is : %d",max);
    return 0;
}

