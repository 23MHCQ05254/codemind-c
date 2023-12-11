#include<stdio.h>
int main()
{
    int n,m=0;
    scanf("%d",&n);
    for(int i=1;i<n;i++)
    {
        if(n%i==0)
        {
            m=m+i;
        }
    }
    if(m>n)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }


}