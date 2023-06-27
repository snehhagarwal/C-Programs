/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int perfectnumber(int num)
{
    int s=0;
    for (int i=1;i<num;i++)
    {
        if (num%i==0)
           s+=i;
    }if (s==num)
         return 1;
    else 
        return 0;
}

int main()
{
    int num,a;
    printf("enter the number: ");
    scanf("%d",&num);
    a=perfectnumber(num);
    if (a==1)
       printf("the given number is perfect number");
    else 
       printf("the given number is not perfect number");

    return 0;
}

