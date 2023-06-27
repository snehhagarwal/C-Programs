/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#define size 7

int main()
{   int temp[size],sum=0,maxtemp,mintemp;
    maxtemp=0;
    mintemp=0;
    for (int i=0;i<size;i++)
    {
        printf("enter the temperature for day %d:",i+1);
        scanf("%d",&temp[i]);
    }for(int i=0;i<size;i++)
    {   sum+=temp[i];
        if (temp[maxtemp]<temp[i])
           maxtemp=i;
        if (temp[mintemp]>temp[i])
           mintemp=i;
    }float avg=sum/size;
    printf("the average temperature of the week is :%f\n",avg);
    printf("the hotest day of the week is %d and the hottest temperature is %d\n",maxtemp,temp[maxtemp]);
    printf("the coldest day of the week is %d and the coldest temperature is %d",mintemp,temp[mintemp]);


    return 0;
}

