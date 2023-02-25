#include<stdio.h>
float simple_interest(int ,int ,int );
int main()
{
    int p,r,t;
    float SI;
    printf("enter the perimeter:");
    scanf("%d",&p);
    printf("enter the rate of interest:");
    scanf("%d",&r);
    printf("enter the time period:");
    scanf("%d",&t);
    SI=simple_interest(p,r,t);
    printf("\nsimple interest is %f",SI);
}
float simple_interest(int p,int r,int t)
{
    float SI;
    return SI=p*r*t;
}