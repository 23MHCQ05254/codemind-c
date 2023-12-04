#include<stdio.h>
int main()
{
    int n,r,i=1;
    scanf("%d%d",&n,&r);
    for(i;i<=r;i++)
    {
        printf("%d x %d = %d
",n,i,n*i);
    }
}