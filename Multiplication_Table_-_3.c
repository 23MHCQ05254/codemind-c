#include<stdio.h>
int main()
{
    
    int n,a,b;
    scanf("%d%d%d",&n,&a,&b);
    while(a!=b+1)
    
    
    {
        int k=n*a;
        
        printf("%d x %d = %d
",n,a,k);   
        a++;
    }
}
