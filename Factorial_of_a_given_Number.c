#include<stdio.h>
int main()
{
    int n,i,p=1;
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
        p=p*i;
        
    }
    printf("%d",p);
}