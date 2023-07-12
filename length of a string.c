
#include <stdio.h>
#define size 6
int length(char *str)
{   int s=0;
    for(int i=0;str[i]!='\0';i++)
    {
        s++;
    }return s;
}

int main()
{
    char str[size];
    gets(str);
    int a=length(str);
    printf("the length of %s is %d",str, a);

    return 0;
}

