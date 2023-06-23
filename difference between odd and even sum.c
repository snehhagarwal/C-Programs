/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n,evensum=0,oddsum=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        if (i%2==0)
            evensum+=i;
        else
            oddsum+=i;
    }printf("the sum of even digits is %d\n",evensum);
    printf("the sum of odd digits is %d\n",oddsum);
    if (evensum>oddsum)
        printf("the difference between the sums is %d",evensum-oddsum);
    else
        printf("the difference between the sums is %d",oddsum-evensum);

    return 0;
}

