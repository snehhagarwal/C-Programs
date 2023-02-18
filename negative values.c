/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    
    int n,i,c=0,min,max;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);}
        min=max=a[0];
    
        for(i=1;i<n;i++)
        {
              if (min>a[i])
                min=a[i];
              if (max<a[i])
                max=a[i];
        }printf("max=%d min=%d",max,min);

    return 0;


    return 0;
}

