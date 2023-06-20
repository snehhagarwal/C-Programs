/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int grade,sum=0,no_ofgrades=0;
    printf("enter the grade:");
    scanf("%d",&grade);
    while(grade!=-1)
    {
        sum+=grade;
        no_ofgrades++;
        printf("enter the grade:");
        scanf("%d",&grade);
    }printf("The average of given grades is %f",(float)sum/no_ofgrades);

    return 0;
}

