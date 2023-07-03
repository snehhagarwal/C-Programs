/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#define size 6
int main()
{
    int arr[size],c=0;
    for(int i=0;i<size;i++)
    {   printf("enter the number:");
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<size/2;i++)
    {
        if (arr[i]==arr[(size-1)-i])
            c=1;
    }if (c==1)
        printf("palindrome");
    else
        printf("not palindrome");

    return 0;
}

