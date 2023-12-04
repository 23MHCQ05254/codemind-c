#include<stdio.h>
int main()
{
  /*  int n,re=0;
    scanf("%d",&n);
    while(n!=0)
    {
        int r=n%10;
        int re=re*10+r;
        n=n/10;
    }
    if(re==n)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not Palindrome");
    }
}
include<stdio.h>
int main()*/

    int n,re=0,r,k,p,o;
    scanf("%d",&n);
    o=n;
    while(n!=0)
    {
        r=n%10;
        re=re*10+r;
        n=n/10;
    }
    
    if(o==re)
    printf("Palindrome");
    else
    printf("Not Palindrome");
    
    
    
}