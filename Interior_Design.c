#include<stdio.h>
int main()
{
    int x,y,z,a;
    scanf("%d%d%d%d",&x,&y,&z,&a);
    int m=x+y;
    int l=z+a;
    if(m>l)
    {
        printf("%d",l);
    }
    else 
    {
        printf("%d",m);
    }
}