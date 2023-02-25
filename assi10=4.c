#include<stdio.h>
void printN(int );
int main()
{
    int n;
    printf("enter n:");
    scanf("%d",&n);
    printN(n);
}
void printN(int n)
{
    int i;
    printf("\nnatural numbers are: ");
    for(i=1;i<=n;i++)
    {
        printf("%d ",i);
    }
}