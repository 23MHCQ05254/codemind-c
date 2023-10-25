#include<stdio.h>
int main()
{
    int d;
    scanf("%d",&d);
    int y=d/365;
    int r=d%365;
    int w=r/7;
    printf("%d
%d",y,w);
}