#include <stdio.h>
int main()
{
    char str[100],c=0;
    gets(str);
    for(int i=0;str[i]!='\0';i++)
    {
        if  (str[i]==' ')
             c++;
    }
    printf("the total number of words are %d",c);
    return 0;
}

