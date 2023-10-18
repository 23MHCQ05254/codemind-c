#include<stdio.h>
int main()
{
    int x,y;
    float l,lp;
    scanf("%d%d%f",&x,&y,&l);
    l=x-y;
    lp=(l/x)*100;
    printf("%.2f",lp);
    
}