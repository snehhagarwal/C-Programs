/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int arr[]={1,2,3,4,5,0,6,7,8,9};
    int max;
    max=arr[0];
    for (int i=0;i<=9;i++)
    {
        if (max<arr[i])
            max=arr[i];
    }printf("%d",max);

    return 0;
}

