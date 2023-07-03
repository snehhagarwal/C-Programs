/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#define size 10
int main()
{
    int arr[size],c=0,nonuniquecount=0;
    for (int i=0;i<size;i++)
    {
        printf("enter the element:");
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<i;j++)
        {
            if (i==j)
               continue;
            if (arr[i]==arr[j])
               c+=1;
        }if (c==1) 
        {
            printf("the non unique element is %d\n",arr[i]);
            nonuniquecount++;
        }c=0;
    }printf("the number of unique elements is : %d",nonuniquecount);

    return 0;
}

