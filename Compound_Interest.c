#include<stdio.h>
#include<math.h>
int main()
{
    float p,r,t;
    scanf("%f%f%f",&p,&r,&t);
    double c=p*(pow((1+r/100),t)-1);
    printf("%.2lf",c);
}