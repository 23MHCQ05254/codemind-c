#include<stdio.h>
int main()
{
    float n,i;
    float s=0,k;
    scanf("%f",&n);
    for(i=1;i<=n;i++)
    {
        k=(1/i);
        s=s+k;
    }
    printf("%.2f",s);
}