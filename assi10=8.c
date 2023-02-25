#include<stdio.h>
int arrange(int ,int );
int main()
{
    int n,r,k;
    printf("enter the how many items:");
    scanf("%d",&n);
    printf("enter r:");
    scanf("%d",&r);
    k=arrange( n, r);
    printf("number of arrangement is %d",k);
}
int arrange(int num,int r)
{
    int i,p=1,t=1;
    for(i=1;i<=num;i++)
    {
        p=p*i;
    }
    for(i=1;i<=(num-r);i++)
    {
        t=t*i;
    }
    return p/t;
}