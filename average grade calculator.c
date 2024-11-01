#include <stdio.h>

int main()
{
    int grade,sum=0,no_ofgrades=0;
    printf("enter the grade:");
    scanf("%d",&grade);
    while(grade!=-1)
    {
        sum+=grade;
        no_ofgrades++;
        printf("enter the grade:");
        scanf("%d",&grade);
    }printf("The average of given grades is %f",(float)sum/no_ofgrades);

    return 0;
}

