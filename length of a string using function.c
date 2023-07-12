
#include <stdio.h>
#include <string.h>
int length(char *str)
{
    int a=strlen(str);
    return a;
}

int main()
{
    char str[100];
    gets(str);
    int k=length(str);
    printf("the length of the string is %d",k);

    return 0;
}

