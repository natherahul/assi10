#include<stdio.h>
int digit_present(int ,int );
int main()
{
    int digit ,num,c;
    printf("enter the number:");
    scanf("%d",&num);
    printf("enter the digit:");
    scanf("%d",&digit);
    c=digit_present(num,digit);
    if(c==1)
        printf("%d digit is present in %d",digit,num);
    else
        printf("%d digit not present in %d",digit,num);
}
int digit_present(int n,int d)
{
    while(n>0)
    {
        if(n%10==d)
            return 1;
        n=n/10;
    }
    return 0;
}