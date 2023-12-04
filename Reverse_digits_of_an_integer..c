#include<stdio.h>
int main()
{
    int n,re=0,r,k,p,o;
    scanf("%d",&n);
    o=n;
    while(n!=0)
    {
        r=n%10;
        re=re*10+r;
        n=n/10;
    }
    printf("%d",re);
    
    
}