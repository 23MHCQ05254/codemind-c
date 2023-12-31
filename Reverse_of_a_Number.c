#include<stdio.h>
int main()
{
    int n,r,re=0;
    scanf("%d",&n);
    int o=n;
    while(n!=0)
    {
        r=n%10;
        re=re*10+r;
        n=n/10;
    }
    printf("%d",re);
}