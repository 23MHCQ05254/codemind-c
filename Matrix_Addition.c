#include<stdio.h>
int main()
{
    int j,i,r1,c1,r2,c2,sum;
    scanf("%d%d",&r1,&c1);
    int a[r1][c1];
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            scanf("%d",&a[i][j]);
        }
        
    }
    scanf("%d%d",&r2,&c2);           
	int b[r2][c2];
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            scanf("%d",&b[i][j]);
        }
        
    }
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            sum=a[i][j]+b[i][j];
            printf("%d ",sum);
        }
        printf("
");
        
    }
}