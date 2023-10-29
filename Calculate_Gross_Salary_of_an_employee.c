#include<stdio.h>
int main()
{
    float s,hra,da;
    scanf("%f%f%f",&s,&hra,&da);
    float pf,gs;
    pf=12*s/100;
    gs=s+hra+da+pf;
    printf("%.2f
%.2f",pf,gs);
}
