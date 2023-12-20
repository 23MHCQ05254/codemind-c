#include<stdio.h>
int main()
{
    int units;
    float uc,bill,tb;
    scanf("%d",&units);
    if(units<200)
    {
        uc=1.20;
    }
    else if(units>=200 && units<400)
    {
    uc=1.50;
    }
    else if(units>=400 && units<600)
    {
        uc=1.80;
    }
    else
    {
        uc=2.00;
    }
    bill=units*uc;
    if(bill>400)
    {
        tb=bill+(bill*0.15);
        printf("%.2f",tb);
        
    }
    else
    {
        tb=bill+100;
        printf("%.2f",tb);
    }
}