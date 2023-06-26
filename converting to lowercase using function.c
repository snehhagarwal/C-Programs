/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <ctype.h>
char isUpper(char s)
{
    if (s>='A' && s<='Z')
         return s+32; 
    else
        return -1;
}

int main()
{
    char s;
    scanf("%c",&s);
    char k=isUpper(s);
    printf("%c",k);
    return 0;
}

