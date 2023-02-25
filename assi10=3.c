#include<stdio.h>
int check_even(int);
int main()
{
    int num,n;
    printf("enter the number:");
    scanf("%d",&num);
    n=check_even(num);
    if(n==1)
        printf("%d is a even number",num);
    else
        printf("%d is a odd number",num);
}
int check_even(int num)
{
    if(num%2==0)
        return 1;
    return 0;
}