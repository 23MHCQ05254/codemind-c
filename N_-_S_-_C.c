#include<stdio.h>
int main()
{
    int n,r,l,m;
    scanf("%d%d",&n,&r);
    for(int i=n+1;i<r;i++)
    {
        l=i*i;
        m=i*i*i;
        printf("%d %d %d
",i,l,m);
    }
}