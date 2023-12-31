#include<stdio.h>
int main()
{
    int n,b,l=0;
    scanf("%d",&n);
    while(n!=0)
    {
        b=n%10;
        if(l<b)
        {
            l=b;
        }
        n=n/10;
    }
    printf("%d",l);
}