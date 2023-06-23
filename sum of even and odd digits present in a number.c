/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n,r,evensum=0,oddsum=0;
    scanf("%d",&n);
    while(n!=0)
    {
        r=n%10;
        n=n/10;
        if (r%2==0)
            evensum+=r;
        else
           oddsum+=r;
    }printf("the sum of even digits is  %d\n",evensum);
    printf("the sum of odd digits is %d\n",oddsum);
    printf("the difference between the sums is %d",evensum-oddsum);

    return 0;
}

