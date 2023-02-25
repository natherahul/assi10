#include<stdio.h>
float area(int);
int main()
{
    int radius;float a;
    printf("enter the radius:");
    scanf("%d",&radius);
    a=area(radius);
    printf("area of the circle is %f",a);
}
float area(int r)
{
    float area;
    return area=3.14*r*r;
}