/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#Code-->
#include <stdio.h>

int main()
{
    int n,n1=0,n2=0,s=1;
    scanf("%d",&n);
    if(n<0)
       printf("not valid");
    else
    {
        do{
            scanf("%d",&n2);
            if (n2<0)
                printf("not valid");
            else{
                if (n1>=n2)
                    s=0;
                n1=n2;
                n--;
            }
        }while(n>0);
    }if (s==1)
       printf("very ascending");
     else
       printf("not ascending");
    return 0;
}

