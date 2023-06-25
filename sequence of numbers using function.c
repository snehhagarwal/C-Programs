/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
long seq(int len)
{   long s=0;
    if (len<10)
    {  for(int i=1;i<=len;i++)
            s=s*10+i;
    }
    else
    {  while(len!=0)
       {
           s=10*s+9;
           len--;
       }

    }return s;    
}

int main()
{
    int len;
    scanf("%d",&len);
    long int k=seq(len);
    printf("%ld",k);

    return 0;
}

