#Code-->
#include <stdio.h>
float area(float h,float w)
{   float area_rect;
    area_rect=h*w;
    return area_rect;
}

int main()
{
    float h,w,area_ofrectangle;
    scanf("%f%f",&h,&w);
    area_ofrectangle=area(h,w);
    printf("%.2f",area_ofrectangle);

    return 0;
}

