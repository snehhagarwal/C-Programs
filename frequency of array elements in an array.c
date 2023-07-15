
#include <stdio.h>
#define size 8
int main()
{
    int arr[size]={0,5,4,2,1,3,2,0};
    int countarr[6]={0};
    for (int i=0;i<size;i++)
    {
        countarr[arr[i]]++;
    }
    for(int i=0;i<6;i++)
    {
        printf("the appearance of %d is %d times\n",i,countarr[i]);
    }

    return 0;
}

