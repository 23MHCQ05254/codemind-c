#include<stdio.h>
int main()
{
    int T,S,B,C;
    scanf("%d%d%d",&T,&S,&B);
    C=(2*T*S*B*512)/1024;
    printf("%d KB",C);
    
}