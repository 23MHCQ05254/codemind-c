#include<stdio.h>
int main()
{
    int M,N,X;
    scanf("%d%d%d",&M,&N,&X);
    int cost=2*(M+N)*X;
    printf("%d",cost);
}