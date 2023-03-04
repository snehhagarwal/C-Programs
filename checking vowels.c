/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{  int l=0,c=0,v=0;
    char a[100];
    scanf("%s",a);
    while(a[c]!='\0')
{ char n=a[c];
 if (n=='A'|n=='a'||n=='E'||n=='I'||n=='O'||n=='U'||n=='e'||n=='i'||n=='o'||n=='u')
 {
     v+=1;
     printf("%c\n",n);}
     c++;}
 printf("%d",v);
 return 0;

}

