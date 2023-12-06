#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int c=0;
    for(i=1;c<n;i++)
    {
        if(i%3==0)
        {
            printf("%d ",i);
            c++;
        }
    }
    
}