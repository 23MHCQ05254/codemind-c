#include<stdio.h>
int main()
{
    int m;
    scanf("%d",&m);
    m/60;
    m%60;
    printf("%d Hour(s) %d Minute(s)",m/60,m%60);
}