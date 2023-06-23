/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
void greatno()
{
    int n,s=0,r,k;
    scanf("%d",&n);
    k=n;
    while(k!=0)
    {
        r=r%10;
        k=k/10;
        s+=1;
    }if (s==2)
    {
        r=n%10;
        n=n/10;
        if (r>n)
           printf("the maximum number is : %d",r);
        else
           printf("the maximum number is : %d",n);  
    }else
        printf("error! not a 2 digit number");
}

int main()
{
    greatno();
    return 0;
}

