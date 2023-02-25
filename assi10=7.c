#include<stdio.h>
float combination(float,float );
int main()
{
    float c,n,r;
    printf("enter the items:");
    scanf("%f",&n);
    printf("enter selected at a time:");
    scanf("%f",&r);
    c=combination(n,r);
    printf("number of combination is %f",c);
}
float combination(float n,float r)
{
    int i,k=1,t=1;float a;
    for(i=n;i>r;i--)
    {
        k=k*i;
    }
    for(i=1;i<=n-r;i++)
    {
         t=t*i;
    }
    a=k/t;
    return a;
}