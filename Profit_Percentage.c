#include<stdio.h>
int main()
{
    int CP,SP;
    scanf("%d%d",&CP,&SP);
    double profit=SP-CP;
    double pp=(profit*100)/CP;
    printf("%.2lf",pp);
    
}