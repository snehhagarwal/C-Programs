/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n, i, j,s=1;
    printf("Enter the number of rows: ");
    scanf("%d",&n);
    for(i = 1; i <= n; i++)
    {
        for(j = n; j > i; j--)
        { 
             printf(" ");
            
        }
        for(j = 1;j<=i; j++)
        {
            printf("%d ",s);
            s+=1;
        }
         printf("\n");
    }
    return 0;
}
