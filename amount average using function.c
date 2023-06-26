/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
float max(int num,int digit)
{   int r,c=0,s=0;
    float avg;
    while(num!=0)
    {
        r=num%10;
        if (r<digit)
        {
            c+=1;
            s+=r;
        }num=num/10;
    }avg=s/c;
    return c,avg;
}

int main()
{  
    int num,digit,totalnumber;
    float average;
    scanf("%d%d",&num,&digit);
    totalnumber,average=max(num,digit);
    printf("%d\n%f",totalnumber,average);
    return 0;
}

