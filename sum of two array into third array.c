/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a[3][3],b[3][3],i,j,c[3][3],s;
    printf("enter first matrix:");
    for (i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
           
        }
    } printf("enter second matrix");

     for (i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&b[i][j]);
           
        }
    }
    for(i=0;i<3;i++)
    {   for(j=0;j<3;j++)
        {
        c[i][j]=a[i][j]+b[i][j];
   
        printf("%d  ",  c[i][j]);
        }
        printf("\n");
    }
    
}

