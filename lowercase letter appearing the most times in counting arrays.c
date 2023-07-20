#include <stdio.h>
#define size 9

int main()
{
    char arr[size]={'k','i','b','r','c','k','z','m','b'};
    int countarr[26];
    for (int i=0;i<26;i++)
    {
        countarr[arr[i]-97]++;
    }int max=0;
    for (int i=0;i<26;i++)
    {  
        if (countarr[max]<countarr[i])
           max=i;
    }printf("The alphabet %c appeared most of the times.Total number of %d appearances.",max+97,countarr[max]);
    return 0;
}

