
#Code-->
#include <stdio.h>
#define size 8
int main()
{
    char arr[size]={'k','i','b','r','c','k','z','m'};
    int countarr[26];
    for (int i=0;i<26;i++)
    {
        countarr[arr[i]-97]++;
    }
    for (int i=0;i<26;i++)
    {
        printf("the letter %c appeared %d times\n",i+97,countarr[i]);
    }
    return 0;}

