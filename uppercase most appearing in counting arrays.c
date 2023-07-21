#include <stdio.h>
#define size 13

int main()
{
    char arr[size]={'A','D','Z','A','G','K','T','Y','E','S','Z','T','Z'};
    int countarr[26];
    for (int i=0;i<26;i++)
    {
        countarr[arr[i]-65]++;
    }int max=0;
    for (int i=0;i<26;i++)
    {  
        if (countarr[max]<countarr[i])
           max=i;
    }printf("The alphabet %c appeared most of the times.Total number of %d appearances.",max+65,countarr[max]);
    return 0;

}

