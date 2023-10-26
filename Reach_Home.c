#include<stdio.h>
int main()
{
    int fuel,dist;
    scanf("%d%d",&fuel,&dist);
    int m=5*fuel;
    if(m>=dist)
    {
        printf("YES");
        
    }
    else
    {
        printf("NO");
    }
  
}