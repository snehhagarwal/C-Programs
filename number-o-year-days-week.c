/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int d=455,y,w,x;
    y=d/365;
    w=(d-y)/7;
    x=d-((y*365)+w);
    
    printf("years %d\n",y);
    printf("weeks %d\n",w);
    printf("days %d\n",x);



    return 0;
}



