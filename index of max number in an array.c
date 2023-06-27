 /******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{   int arr[7];
    int max=0;
    for (int i=0;i<7;i++)
    {   
        printf("enter the number:");
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<7;i++)
    {
        if (arr[i]>arr[max])
            max=i;
    }printf("the index of max number is %d",max);

    return 0;
}

