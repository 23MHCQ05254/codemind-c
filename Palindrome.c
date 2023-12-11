#include<stdio.h>
int main()
{
    int n,re=0,o;
    scanf("%d",&n);
    o=n;
    while(n!=0)
    {
        int r=n%10;
        re=re*10+r;
        n=n/10;
    }
    if(o==re)
    printf("True");
    else
    printf("False");
    
}