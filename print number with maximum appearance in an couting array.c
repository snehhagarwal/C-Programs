#include <stdio.h>
#define size 20
int main()
{
    int arr[size]={0,5,4,2,1,3,2,0,9,8,7,7,6,3,1,2,5,6,6,8};
    int countarr[10]={0};
    for (int i=0;i<size;i++)
    {
        countarr[arr[i]]++;
    }int max=0;
    for(int i=0;i<10;i++)
    {
        if (countarr[max]<countarr[i])
            max=i;
    }printf("The value of %d appeared the most times.Total number of %d appearances",max,countarr[max]);

    return 0;
}

