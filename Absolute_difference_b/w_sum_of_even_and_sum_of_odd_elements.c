#include<stdio.h>
int main()
{
    int n,i,es=0,os=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        es=es+a[i];
        else
        os=os+a[i];
    }
    if(es>os)
    printf("%d",es-os);
    else
    printf("%d",os-es);
    
}