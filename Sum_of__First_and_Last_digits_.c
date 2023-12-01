#include<stdio.h>
int main()
{
    int n,f,l;
    scanf("%d",&n);
    f=n;
    while(f>=10)
    {
        f=f/10;
    }
    
    l=n%10;
    
    int sum=l+f;
    printf("%d",sum);
}