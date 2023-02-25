#include<stdio.h>
int fact(int);
int main()
{
    int n, num;
    printf("enter the number:");
    scanf("%d",&num);
    n=fact(num);
    printf("factorial of %d is %d",num,n);
}
int fact(int n)
{
    int i,sum=1;
    for(i=1;i<=n;i++)
    {
        sum=sum*i;
    }
    return sum;
}