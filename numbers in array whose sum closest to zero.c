/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <math.h>
#define size 4
int main()
{
    int arr[4]={1,-2,2,3};
    int sum=arr[0]+arr[1];
    int currentsum;
    for(int i=0;i<size;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            currentsum=arr[i]+arr[j];
            if(abs(currentsum)<abs(sum))
                sum=currentsum;
        }
    }printf("the sum closest to 0 is %d",sum);

    return 0;
}

