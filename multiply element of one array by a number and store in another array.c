/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a[3][3],i,j,s,c[3][3];
    scanf("%d",&s);
    printf("enter first matrix:");
    for (i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
           
        }
    }
    for(i=0;i<3;i++)
    {   for(j=0;j<3;j++)
        {
        c[i][j]=s*a[i][j];
   
        printf("%d  ",  c[i][j]);
        }
        printf("\n");
    }
    


    return 0;
}

