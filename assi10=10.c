#include<stdio.h>
void prime_factor(int ); 
int main()
{
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    prime_factor(n);
}
void prime_factor(int num)
{
    int i;
    printf("the prime factor of %d is",num);
    while(num>1)
    {
        for(i=2;i<=num;i++)
        {
            if(num%i==0)
            {
                printf(" %d ",i);
                num=num/i;
                break;
            }
            
        }
    }
}