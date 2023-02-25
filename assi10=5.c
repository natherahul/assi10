#include<stdio.h>
void oddN(int);
int main()
{
    int n;
    printf("enter n:");
    scanf("%d",&n);
    oddN(n);
}
void oddN(int n)
{
    int i;
    printf("\nodd natural numbers are: ");
    for(i=1;i<=2*n;i++)
    {
        if(i%2!=0)
            printf("%d ",i);
    }
}
