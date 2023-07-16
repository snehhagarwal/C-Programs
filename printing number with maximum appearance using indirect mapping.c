#include <stdio.h>
#define size 8

int main()
{
    int arr[size]={7,5,6,9,6,7,10,7};
    int countarr[6];
    for(int i=0;i<6;i++)
    {
        countarr[arr[i]-5]++;
    }int max=0;
    for(int i=0;i<6;i++)
    {
        if (countarr[max]<countarr[i])
             max=i;
    }printf("the value of %d appeared most of the times.Total of %d appearances",max+5,countarr[max]);
    return 0;
}

