/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int arr1[3]={1,2,2000};
    int arr2[3];
    for (int i=0;i<3;i++)
    {
        arr2[i]=arr1[i];
    }
    for (int i=0;i<3;i++)
    {
        printf("%5d",arr1[i]);
    }printf("\n");
    for (int i=0;i<3;i++)
    {
        printf("%5d",arr2[i]);
    }
    

    return 0;
}

