#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,n,j,k=0;
    scanf("%d",&n);
    int *a=(int *)malloc(n*sizeof(int));
    int *b=(int *)malloc(n*sizeof(int));
    int *c=(int *)malloc(n*sizeof(int));
    int *d=(int *)malloc(n*sizeof(int));
    
    for(i=0;i<n;i++)
    scanf("%d",(a+i));
    for(i=0;i<n;i++)
    scanf("%d",(b+i));
    
    for(i=0;i<n;i++)
    {
        c[i]=a[i]-b[i];
        d[i]=a[i]+b[i];
    }
    
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i!=j)
            {
                if(c[i]>=c[j] && d[i]<=d[j]){
                k=1;
                printf("%d\n",a[i]);
                }
            }
        }
    }
    if(k==0)
    printf("-1");
    
    
	
	
	
	return 0;
}
