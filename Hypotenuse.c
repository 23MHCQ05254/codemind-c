#include<stdio.h>
#include<math.h>
int main()
{
    double a,b;
    double hyp;
    scanf("%lf%lf",&a,&b);
    hyp=sqrt(pow(a,2)+pow(b,2));
    printf("%.2lf",hyp);
}